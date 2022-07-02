// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    bool fnd(vector<string> v,string data)
    {
       for(auto A:v)
       {
           if(A==data) return true;
       }
       return false;
    }
    
    void solve(string ip,vector<string> &v,int i)
    {
        if(i>=ip.length())
        {
          v.push_back(ip);    
          return;
        }
        
        for(int j=i;j<ip.length();j++)
        {
            swap(ip[i],ip[j]);
            //cout<<ip<<" ";
            //if(!fnd(v,ip)) v.push_back(ip);
            solve(ip,v,i+1);
            swap(ip[i],ip[j]);
        }
        //solve(ip,v,i+1);
    }
    
	public:
		vector<string> find_permutation(string S)
		{
		    vector<string> ans;
		    solve(S,ans,0);
		    sort(ans.begin(),ans.end());
		    return ans;
		}
};



// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}
  // } Driver Code Ends