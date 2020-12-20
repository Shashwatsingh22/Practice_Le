#include<iostream>
using namespace std;


int main()
{
    int num,times;
    cin>>num>>times;
    while(times--)
    {
        if(num%10==0)
        {
         num=num/10;   
        }
        else
        {
            num-=1;
        }
    }
    cout<<num<<endl;
}
