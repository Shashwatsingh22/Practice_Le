#include<iostream>
#include<string>
using namespace std;

char int_do_bit(string st)
{
    if(st[0]=='+' || st[1]=='+' )
    {
        return '+';
    }
    if(st[0]=='-' || st[1]=='-')
    {
        return '-';
    }
}

int main()
{
    int x=0,ch;
    cin>>ch;
    while(ch--)
    {
        string ops;
        cin>>ops;
        if('+'==int_do_bit(ops))
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    cout<<x<<endl;
}
