#include<iostream>
#include<algorithm>

using namespace std;

// Min Indian Money Change

bool compare(int a,int b)
{
    return a<=b;
}

int main()
{
    int notesCo[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(notesCo)/sizeof(notesCo[0]);
    int money;
    cin>>money;
    
    do
    {
      auto add=lower_bound(notesCo,notesCo+n,money,compare);
      int note=notesCo[add-notesCo-1];
      cout<<"Give this Note then :"<<note<<endl;
      money-=note;
    }while(money>0);
    
}