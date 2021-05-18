//NextPermutation means it make from the given just bigger then the prev given integer
//like --> 1,2,3 =next> 1,3,2 =next> 2,3,1 =next> 3,1,2 =next> 3,2,1 =next> 1,2,3

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    next_permutation(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;

        next_permutation(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;

        next_permutation(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;

        next_permutation(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;

        next_permutation(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
        next_permutation(arr,arr+n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}