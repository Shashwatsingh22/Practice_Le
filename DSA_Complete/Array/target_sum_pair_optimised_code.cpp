#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b)
{
	return a<b;
}

void soln(int A[],int n,int ele)
{  
   sort(A,A+n,compare);

   int first=0,last=n-1;

   while(first<last)
   {
     if(A[first]+A[last]==ele)
	 {
		 cout<<A[first]<<" and "<<A[last]<<endl;
		 first++;
		 last--;
	 }
	 else if(A[first]+A[last]>ele)
	 {
		 last--;
	 }
	 else
	 {
		 first++;
	 }
   }

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