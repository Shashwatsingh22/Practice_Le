#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the Size of the Array: ";
    cin>>size;
    int A[size];

    cout<<"Enter the Elements : ";
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    
    int currentSum=0;
    int MaxSum=INT_MIN;


//-4 1 3 -2 6 2 -1 -4 -7
    for(int i=0;i<size;i++)
    {
      
        currentSum+=A[i];
        if(currentSum<0)
        {
            currentSum=0;
        }
        if(currentSum>MaxSum)   //Here we can also use the Max(MaxSum,currentSum)  inbuilt function....
        {
            MaxSum=currentSum;
        }
    }
    cout<<"Maximum : "<<MaxSum;
}