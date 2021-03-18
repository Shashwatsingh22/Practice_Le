#include<iostream>
#include<string>
using namespace std;

int isPallindrom(string name)
{
    int i=0,j=name.length()-1;
    
    while(i<j)
    {
        if(name[i]!=name[j])
        {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    string s = "nitin";
    cout<<s.length();
   int  r=isPallindrom(s);
    if(r==1)
    {
        cout<<"isPallindrom";
    }
    else
    {
        cout<<" No it is Not";
    }
}