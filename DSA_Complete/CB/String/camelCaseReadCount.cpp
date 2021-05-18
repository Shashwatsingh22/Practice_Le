
#include<iostream>
#include<cstring>
using namespace std;

int main() {
	string st;
	cin>>st;
    int i=0;

    int len=st.length();
	cout<<st[i++];
	while(len--)
	{
		if(st[i]>='a' && st[i]<='z')
		{
			cout<<st[i++];
		}
		else if(st[i]>='A' && st[i]<='Z')
		{ 
			cout<<endl;
			cout<<st[i++];
		}
		else
		{
			cout<<st[i++];
		}
	}

	return 0;
}