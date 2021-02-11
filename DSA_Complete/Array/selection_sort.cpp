#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

void selection_sort(int a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i;j<=n-1;j++)
        {
            if(a[j]<a[min_index])
            {
                min_index=j;
            }
        }
        swap(a[i],a[min_index]);
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
    selection_sort(A,size);
    display(A,size);

}