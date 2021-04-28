/*

Take as input N, the size of array. Take N more inputs and store that in an array. 
Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format
The first line contains input N. Next N lines contains the elements of 
array and (N+1)th line contains target number.

Constraints
Length of the arrays should be between 1 and 1000.

Output Format
Print all the pairs of numbers which sum to target. Print each pair in increasing order.

Sample Input
5
1
3
4
2
5
5
Sample Output
1 and 4
2 and 3
Explanation
Find any pair of elements in the array which has sum equal to target element and print them.
*/

#include<iostream>
using namespace std;

void soln(int A[],int n,int ele)
{  
   for(int i=0;i<n;i++)
   {
	   for(int k=i;k<n;k++)
	   {
		   if(A[i]+A[k]==ele)
		   {
			   if(A[i]<A[k])
			   {
			    cout<<A[i]<<" and "<<A[k]<<endl;
			   }
			   else if(A[i]==A[k])
			   {
				   continue;
			   }
			   else
			   {
			    cout<<A[k]<<" and "<<A[i]<<endl;
			   }
		   }

	   }
   }
   return;
}

int main() {
    
	int n;
	cin>>n;

	int A[n]={0};

	for(int i=0;i<n;i++)
	{
		cin>>A[i];
	}

	int key;
	cin>>key;
    
	soln(A,n,key);

	return 0;
}