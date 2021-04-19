#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    n=n>3 ? n:3;
    vector<int> v(n,0);
    while(m--)
    {
        int st,end,val;
        cin>>st>>end>>val;
        for(int i=st-1;i<=end-1;i++)
        {
            v[i]+=val;
        }
    }
    int max=INT_MIN;
    for(int i=0;i<v.size();i++)
        {
            if(max<v[i])
            {
                max=v[i];
            }
        }
        cout<<max;
}