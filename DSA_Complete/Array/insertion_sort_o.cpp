#include<iostream>
using namespace std;


void insertion_sort(int A[],int n)
{
   for(int i=1;i<=n-1;i++)
   {
       int current=A[i];
       
       int j=i-1;
       while(j>=0 and A[j]>current)              
       {
           A[j+1]=A[j];
           j--;
       }
       A[j+1] = current;
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
    insertion_sort(A,size);
    display(A,size);

}