#include<iostream>
using namespace std;

int main() {
	int row,col;
	cin>>row>>col;
	int A[row][col]={0};
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>A[i][j];
		}
	}
    int flag=0;
	for(int j=0;j<col;j++)
	{  
		
		if(flag==0)
		{
			for(int i=0;i<row;i++)
			{
			   flag=1;
               cout<<A[i][j]<<" ";
			}
	    }
		else
		{
			for(int i=row-1;i>=0;i--)
			{ 
				flag=0;
				cout<<A[i][j]<<" ";

			}
		}
	}

	return 0;
}