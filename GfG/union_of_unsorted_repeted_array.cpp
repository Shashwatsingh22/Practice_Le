// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template in C++
class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int search(vector <int> v,int key)
    {
        int i=0;
        int j=v.size()-1;
        
        while(i<=j)
        {
            int mid=(i+j)/2;
            if(v[mid]==key)
            {
                return 0;
            }
            else if(v[mid]>key)
            {
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        return 1;
    }
    
    int doUnion(int a[], int n, int b[], int m)  {
        sort(a,a+n);
        sort(b,b+m);
        
        vector<int> v;
        
        int i=0,j=0;
        while(i<n && j<m)
        {
            if(a[i]<b[j])
            {
             if(search(v,a[i]))
             {
              v.push_back(a[i]);   
             }
             i++;
            }
            else if(a[i]>b[j])
            {
              if(search(v,b[j]))
              {
              v.push_back(b[j]);
              }
              j++;
            }
            else if(a[i]==b[j])
            {
               if(search(v,a[i]))
               {
                v.push_back(a[i]);
               }
                i++;
                j++;
            }
        }
        
        for(;i<n;i++)
        {
            if(search(v,a[i]))
            {
                v.push_back(a[i]);
            }
        }
        for(;j<m;j++)
        {
            if(search(v,b[j]))
            {
                v.push_back(b[j]);
            }
        }
        
        return v.size();
        //code here
    }
};

// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	   
	    for(int i = 0;i<n;i++)
	       cin >> a[i];
	       
	    for(int i = 0;i<m;i++)
	       cin >> b[i];
	    Solution ob;
	    cout << ob.doUnion(a, n, b, m) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends