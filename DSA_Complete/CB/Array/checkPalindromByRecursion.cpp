#include<iostream>
using namespace std;

string plaindrome(int A[],int i,int j){
   
   if(i>j)
   {
       return "true";
   }
    if(A[i]==A[j])
		{
			i++;
			j--;
			return plaindrome(A,i,j);
		}

   return "false";
}

int main() {
	int num;
	cin>>num;
	int A[num];

	for(int i=0;i<num;i++)
	{
		cin>>A[i];
	}
    
	int i=0;
	int j=num-1;
	
    cout<<plaindrome(A,i,j);

	return 0;
}