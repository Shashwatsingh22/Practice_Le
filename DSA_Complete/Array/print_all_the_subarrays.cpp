#include<iostream>
using namespace std;

void print_subarrays(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<j;k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}

int main()
{
    int size;
    cin>>size;
    int A[size];
    
    cout<<"Enter the Elements : ";
    for(int i=0;i<size;i++)
    {
      cin>>A[i];
    }

    print_subarrays(A,size);
}