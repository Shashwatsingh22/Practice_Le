#include<iostream>
using namespace std;

int main()
{
    //Main Pointer
    int **ptr;

    int row,col;
    cin>>row>>col;
    
    //Array For the Managing the Pointer of each rows
    ptr= new int*[row];
    
    //Here we are assining the Each ptr to its ARRAY or Creating 2D array
    for(int i=0;i<row;i++)
    {
        ptr[i]= new int[col];
    }
     
    //Lets Give Values And TRy to Print It
    int val=10;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            ptr[i][j]=val;
            cout<<ptr[i][j]<<" ";
            val+=10;
        }
        cout<<endl;
    } 

}