#include<iostream>
#include<cstring>
#include<string>
using namespace std;

bool isPresent(int key)
{
   int arr[]={2,3,5,7,11,13,17,19,23,29};
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
   {
	   if(key==arr[i])
	   {
		   return true;
	   }
   }
   return false;
}

bool isDiv(int key)
{
   int arr[]={2,3,5,7,11,13,17,19,23,29};
   for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
   {
	   if(key%arr[i]==0)
	   {
		   return true;
	   }
   }
   return false;
}

int changeToInt(string st)
{
  int num=0;
  int p=1;
  for(int i=st.length()-1;i>=0;i--)
  {
	  num+=(st[i]+'0')*p;
	  p*=10;
  }
  return num;
}

int main() {
	int n;
	cin>>n;
	int count=0;
	string st;

	cin>>st;

string s;
	for(int i=0;i<n;i++)
	{
		
		s+=st[i];
		if(isDiv(changeToInt(s)))
		{
			count++;
		}
		else if(isPresent(changeToInt(s)))
		{
			count++;
		}
	}
    cout<<count<<endl;
    
	
	return 0;
}