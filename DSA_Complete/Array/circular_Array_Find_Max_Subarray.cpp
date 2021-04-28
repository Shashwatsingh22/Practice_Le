#include<iostream>
#include<climits>
using namespace std;

int maxNegValue(int A[],int n)
{
    int Max=INT_MIN;
	
		for(int i=0;i<n;i++)
		{
			if(A[i]>Max)
			{
              Max=A[i];
			}
		}
		return Max;
}

int kadane(int A[],int st,int end)
{
   int Max=INT_MIN;
   int sum=0;
   for(int i=st;i<end;i++)
   {
	   sum+=A[i];
	   if(sum<0)
	   {
		   sum=0;
	   }
	   else if(sum>Max){
          Max=sum;
	   }
   }
   return Max;
}

int circularSoln(int A[],int n)
{
	int size=2*n;
    int B[size]={0};

    int j=0,i=0;
    while(i<size)
	{
	   B[i]=A[j];
       i++;
	   j++;
	   if(j==n)
		{
			j=0;
		}
	}
    
	int ptr=0;
	int qtr=n;
    
	int Max=kadane(B,ptr,qtr);
	
	while(qtr<size)
	{
		ptr++;
		qtr++;
		int max=kadane(B,ptr,qtr);
		if(max>Max)
		{
			Max=max;
		}
	}


    return Max;
    
}

int main() 
{
	int num;
	cin>>num;
	while(num--)
	{
		int size;
		cin>>size;
		int A[size]={0};
		int flag=0;
		for(int i=0;i<size;i++)
		{
			cin>>A[i];
			
			if(A[i]>0)
			{
             flag=1;
			}
		}
		if(flag==0)
		{
			cout<<maxNegValue(A,size)<<endl;
		}
		else
		{
			cout<<circularSoln(A,size)<<endl;
		}
		
	}
	return 0;
}