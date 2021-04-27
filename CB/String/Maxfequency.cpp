#include<iostream>
#include<string>
using namespace std;

char findMax(string s)
{
	int ASCII[256]={0};
    int max=0;
    char max_char;

	for(int i=0;i<s.length();i++)
	{
       ASCII[(int)s[i]]++;
       if(max<ASCII[(int)s[i]])
       {
           max=ASCII[(int)s[i]];
           max_char=s[i];
       }
	}
	return max_char;
}

int main() {

	string str;
    cin>>str;

	cout<<findMax(str);
	return 0;
}