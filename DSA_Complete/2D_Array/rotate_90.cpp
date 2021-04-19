#include<iostream>
using namespace std;

void Rotate90(int A[][100],int n)
{
    // Reverse Row 
    for(int i=0;i<n;i++)
    {
        int startCol = 0;
        int endCol = n-1;
        
        while(startCol<endCol)
        {
            swap(A[i][startCol],A[i][endCol]);
            endCol--;
            startCol++;
        }
    }
    
    // Transpose
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<j)
            {
                swap(A[i][j],A[j][i]);
            }
        }
    }
}

int main()
{
    int A[][100]={0};
    
    int n;
    
    cin>>n;
    
    int temp=1;
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            A[i][j]=temp++;
        }
    }
    
    
    //Print Normal
    cout<<"Normal"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // Function of Rotate 90
    Rotate90(A,n);
    
    
    //Lets Print To 90
    cout<<"Rotated to 90"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
}