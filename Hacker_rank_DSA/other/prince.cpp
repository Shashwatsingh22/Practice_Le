#include <bits/stdc++.h>

using namespace std;
int main()  
{ string vs,qs;
    vector<string> v;
        vector<string> q;
                vector<int> ans;

    int vi;
    cin>>vi;
    for (int i = 0; i < vi; i++)
    {    cin>>vs;
        v.push_back(vs);
    }
    int qi;
    cin>>qi;
    for (int j = 0; j < qi; j++)
    {   
         cin>>qs;
        v.push_back(qs);
    }
    
    int len1 = v.size();
    int len2 = q.size();
    for(int k=0; k<len2; k++) 
    {   int count =0;
        for(int m=0; m<len1; m++) 
        {
            if(v[m]==q[k])
            {
                count++; 
            }
        }
        ans.push_back(count);
    }
    
    for (int g = 0; g <qi; g++)
    {
        cout<<ans[g];
    }
    
}