#include<iostream>
#include<algorithm>
using namespace std;

/*
Inbuilt Sort Algo are better or more efficient then the other sorting algos like insertion,
selection,bubble sorts...
*/

bool compare(int x,int y)
{
    return x<y;
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
    
    sort(A,A+size,compare);
    
    cout<<"Sorted Elements : ";
    for(int i=0;i<size;i++)
    {
      cout<<A[i];
    }
    
}