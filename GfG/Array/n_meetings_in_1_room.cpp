// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({start[i],end[i]});
        }
        
        sort(v.begin(),v.end(),comp);
        
        int res=1;
        int lastEnd=v[0].second;
        
        for(int i=1;i<n;i++)
        {
            if(lastEnd<v[i].first)
            {
                res++;
                lastEnd=v[i].second;
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends