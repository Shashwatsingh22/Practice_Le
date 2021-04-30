#include<iostream>
using namespace std;
    /*
    Here We are using the Binary Search where mapping the row,col with the single index 
    becoz as we represent in the Single array then this will for the Sorted Order So we
    can decrease the time Complexity by O(logn)
    */ 

int main()
{
    int col,row;
    cin>>col>>row;
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

	int first=0,last=row*col-1;
	int flag=0;

    while(last>=first)
    {
       int mid=(first+last)/2;
       int i=mid/col,j=mid%col;
        if(A[i][j]==key)
        {
          flag=1;
          cout<<1<<endl;
          break;
        }
        else if(A[i][j]>key)
        {
         last=mid-1;
        }
        else
        {
          first=mid+1; 
        }
    } 
    if(flag==0)
    {
        cout<<0<<endl;
    }
	return 0;
};


//For LeetCode


class Solution {
public:
    
    /*
    Here We are using the Binary Search where mapping the row,col with the single index 
    becoz as we represent in the Single array then this will for the Sorted Order So we
    can decrease the time Complexity by O(logn)
    */ 
    
    bool searchMatrix(vector<vector<int>>& A, int key) {
     
    int col=A[0].size();
    int row=A.size();
        
	int first=0,last=row*col-1;
	
    while(last>=first)
    {
       int mid=(first+last)/2;
       int i=mid/col,j=mid%col;
       
        if(A[i][j]==key)
        {
          return 1;
        }
        else if(A[i][j]>key)
        {
         last=mid-1;
        }
        else
        {
          first=mid+1; 
        }
    } 
    
	return 0;
}
};