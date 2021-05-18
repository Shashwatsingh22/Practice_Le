#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	string st;
    cin>>st;

	int len=st.length();
    
	//vector<char> v;

	for(int i=0;i<len;i++)
	{
        cout<<st[i];
        //v.push_back(st[i]);
		if(st[i+1]!='\0')
	    {
		int diff=(int)st[i+1]-(int)st[i];
		cout<<diff;
        //diff+='0';
        //cout<<(char)diff<<endl;
		//v.push_back(diff);
		}
	}
    //for(int i=0;i<v.size();i++)
	//{
     //   cout<<v[i];
    //}
    return 0;
}