#include<iostream>
using namespace std;
 
 
int main()
{
    int ch,x=0;
    cin>>ch;
    char lastcolor='X';
    while(ch--)
    {
        char color;
        cin>>color;
        
        if(lastcolor==color)
        {
            ++x;
        }
        else
        {
            lastcolor=color;
        }
    }
    cout<<x<<endl;
}
