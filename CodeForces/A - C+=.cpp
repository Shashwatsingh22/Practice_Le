#include<iostream>
using namespace std;

int give_greater_steps(int x,int y, int z)
{
    int i=0,sum=0;
    while(true)
    {
        sum=x+y;
        y=x>y ? x:y;
        x=sum;
        i++;
        if(sum>z){break;}
    }
    return i;
}

int main()
{
    int times;
    cin>>times;
    while(times--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        cout<<give_greater_steps(a,b,n)<<endl;
    }
}
