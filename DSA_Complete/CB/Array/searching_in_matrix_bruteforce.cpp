#include<iostream>
using namespace std;

int main() {
	int row=0,col=0;
	cin>>row>>col;
	int A[row][col]={0};
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>A[i][j];
		}
	}
    
	int key;
	cin>>key;
     
	int flag=0; 
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(key==A[i][j])
			{
				flag=1;
				cout<<1<<endl;
				break;
			}
		}
	} 
    if(flag==0)
	{
		cout<<0<<endl;
	}
	return 0;
}