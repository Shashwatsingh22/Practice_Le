#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int soln(string st,int k,char ch)
{
	int i=0;
	int j=0;
	int max=0;
	int count=0;
	int cmax=0;
//2 abba
	while(i<st.length())
	{
		if(st[j]==ch)
		{
		j++;
		cmax++;
		}
	    else if(k>0 && st[j]!=ch)
		{
			k--;
			j++;
			cmax++;
		}
    	else if(k<=0 && st[j]!=ch) 
		{
			count=1;
			i=j;
		}

		if(count==1 && max<cmax)
		{
			max=cmax;
		}
		
	}
	return max;
}

int main() {
    int k;
	string st;
	cin>>k>>st;

    int a=soln(st,k,'a');
	int b=soln(st,k,'b'); 

	cout<<max(a,b)<<endl;	
    

	return 0;
}