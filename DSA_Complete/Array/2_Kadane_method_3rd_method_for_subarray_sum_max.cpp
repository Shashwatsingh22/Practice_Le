#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the Size of the Array: ";
    cin>>size;

    int currentSum=0;
    int MaxSum=INT_MIN;
    
    int num;
    cin>>num;
    if(num>0)
    {
        currentSum+=num;
        if(currentSum>MaxSum)
        {
            MaxSum=currentSum;
        }
    }
    size-=1;
    
    while(size--)
    {
      cin>>num;
      currentSum+=num;
      if(currentSum>MaxSum)
        {
            MaxSum=currentSum;
        }
    }

    cout<<"Maximum : "<<MaxSum;
}