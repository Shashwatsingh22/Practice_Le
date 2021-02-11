#include<iostream>
using namespace std;

void bubble_sort(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
         {
            swap(A[j],A[j+1]);
         }
        }
    }
}

void display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
}

int main()
{
    int size;
    cout<<"Enter the Size of the Array : ";
    cin>>size;
    int A[size]={0};

    for(int i=0;i<size;i++)
    {
       cin>>A[i];
    }
    
    cout<<"Before Sort !"<<endl;

    display(A,size);

    cout<<endl<<"After Sort !"<<endl;
    bubble_sort(A,size);
    display(A,size);

}