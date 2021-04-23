#include<iostream>
using namespace std;

void Display(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int isFound(int A[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

bool BinarySearch(int A[],int n,int key)
{
    int i=0,j=n;
    while(i<j)
    {
        int mid;
        mid=(i+j)/2;
        if(A[mid]==key)
        {
            return false;
        }
        else if(A[mid]<key)
        {
            i=mid+1;
        }
        else
        {
            j=mid-1;
        }
    }
    return true;
}

void union_of_unsorted_array(int A[],int n,int B[],int n1,int C[])
{
    int k=0;   
    for(int i=0;i<n;i++)
    {
        if(isFound(C,k,A[i])==0)
        {
            C[k++]=A[i];
        }
    }
    Display(C,n1+n);
    for(int j=0;j<n1;j++)
    {
        if(isFound(C,k,B[j])==0)
        {
            C[k++]=B[j];
        }
    }
    Display(C,n+n1);
}

void union_for_the_sorted_Array(int A[],int n,int B[],int n1,int C[])
{
     int k=0,i=0,j=0;
     while(i<n && j<n1)
     {   
         if(A[i]==B[j] && BinarySearch(C,k,A[i]))
         {
           cout<<A[i]<<endl;
           C[k++]=A[i++];
           j++;
         }
         else if(A[i]<B[j] && BinarySearch(C,k,A[i]))
         {
             cout<<A[i]<<endl;
             C[k++]=A[i++];
         }
         else if(A[i]>B[j] && BinarySearch(C,k,B[j]))
         {
                 cout<<B[j]<<endl;
                 C[k++]=B[j++];

         }
         else
         {
             i++;
             j++;
         }
     }
    for(;i<n;i++)
    {
        if(BinarySearch(C,k,A[i]))
        {
          cout<<A[i]<<endl;
         C[k++]=A[i];
        }
    }
    for(;j<n1;j++)
    {
        if(BinarySearch(C,k,B[j]))
        {
            cout<<B[j]<<endl;
          C[k++]=A[j];
        }
    }
}



int main()
{
    //testCase -->For Unsorted Array
    //int A[]={50,5,10,1,8,10,4,3,7,10,50,2};
    //int B[]={-2,4,0,3,80,25,7,10,6,2};

    //testCase For Sorted Array
    int A[]={2,4,6,6,6,8,10,12,12,12,14,14};
    int B[]={3,6,6,6,9,12,15,15,18,21,24,24,27,30};

    int n=sizeof(A)/sizeof(A[0]);
    int n1=sizeof(B)/sizeof(B[0]);
    
    int C[n+n1]={0};
    union_for_the_sorted_Array(A,n,B,n1,C);
    cout<<"A : ";
    Display(A,n);
    cout<<"B :";
    Display(B,n1);
    cout<<"C :";
    Display(C,n+n1);
}