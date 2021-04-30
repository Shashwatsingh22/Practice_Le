#include<iostream>
using namespace std;

int main()
{
    long long int num;
    cin>>num; 
    int count=1;
    int sum_odd=0; 
    int sum_even=0;

    while(num)
    {
        int value=0;
        value=num%10;
        num/=10;
        if(count%2==0)
        {
          sum_even+=value;
          count++;
        }
        else
        {
            sum_odd+=value;
            count++;
        }
    }
    cout<<"even "<<sum_even<<" \nodd "<<sum_odd<<endl;
}