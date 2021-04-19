#include<iostream>
using namespace std;

void SpiralPrint(int A[][1000],int m,int n)
{
    int startRow=0;
    int startCol=0;
    int endRow=m-1;
    int endCol=n-1;
    
    //Algo 
    while(startCol<=endCol && startRow<=endRow)
    {
        for(int i=startCol;i<=endCol;i++)
        {
            cout<<A[startRow][i]<<" ";
        }
        startRow++;
        
        for(int i=startRow;i<=endRow;i++)
        {
            cout<<A[i][endCol]<<" ";
        }
        endCol--;
        
        if(startRow<endRow)
        {
        for(int i=endCol;i>=startCol;i--)
        {
            cout<<A[endRow][i]<<" ";
        }
        endRow--;
        }
        
        if(startCol<endCol)
        {
        for(int i=endRow;i>=startRow;i--)
        {
            cout<<A[i][startCol]<<" ";
        }
        startCol++;
        }
            
        }
}


int main()
{
    int row,col;
    
    cin>>row;
    cin>>col;
    
    int A[1000][1000]={0};
    int temp=1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            A[i][j]=temp++;
        }
    }
    
    //Print 
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //Spiral Print
    cout<<"Spiral Print"<<endl;
    SpiralPrint(A,row,col);
}