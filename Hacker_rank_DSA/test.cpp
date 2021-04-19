#include<iostream>
#include<vector>
using namespace std;

class Array{
    public:
    int *arry;
    int size;
};

int main()
{
    int n,m;
    cin>>n>>m;
    Array A;
    A.size = n>=3 ? n : 3;
    A.arry = new int[A.size];
    int max;
    while(m--)
    {
        int st,end,val;
        cin>>st>>end>>val;
        for(int i=st-1;i<=end-1;i++)
        {
            A.arry[i]+=val;
        }
    }
    for(int i=0;i<A.size;i++)
        {
            cout<<A.arry[i]<<" ";
        }
}