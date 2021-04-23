/*
2. You are given a sorted array of integers. Each element in the array occurs
2 times expect one element. Find the element that occurs just once in the
array in just O(logN) time and O(1) extra space.
Sample Input 1:
Array = 1,1,2,2,3,4,4
Output Input 1:
3 
*/

#include<iostream>
using namespace std;

int output(int A[],int n)
{
    int first=0;
    int last=n-1;

    while(first<=last)
    {
        int mid;
        mid=(first+last)/2;
        if(first==last)
        {
            return A[mid];
        }

        else if(mid%2==0)
        {
           if(A[mid]==A[mid+1])
           {
               first=mid+2;
           }
           else
           {
               last=mid-1;
           }
        }
        else
        {
            if(A[mid]==A[mid-1])
            {
                first=mid+1;
            }
            else
            {
                last=mid-1;
            }
        }
    }
    return -1;
}


int main()
{ 
    int A[]={1,1,2,2,3,4,4};
    int data=output(A,sizeof(A)/sizeof(A[0]));
    if(data==-1)
    {
        cout<<"Not Found !"<<endl;
    }
    else
    {
        cout<<data;
    }
}