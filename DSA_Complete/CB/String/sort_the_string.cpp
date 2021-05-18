#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

string tokenOfKey(string str,int key)
{
    char *ptr=strtok((char *)str.c_str()," ");

    while(key>1)
    {
        ptr=strtok(NULL," ");
        key--;
    }
    return ptr;
}

int convertToInt(string str)
{
    int num=0,p=1;

    for(int i=str.length()-1;i>=0;i++)
    {
        num+=(str[i]-'0')*p;
        p*=10;
    }
    return num;
}

bool numeric(pair<string,string> st1,pair<string,string> st2)
{
    string num1=st1.second,num2=st2.second;

    return convertToInt(num1)<convertToInt(num2);
}

bool lexo(pair<string,string> st1,pair<string,string> st2)
{
    string num1=st1.second,num2=st2.second;

    return num1<num2;
}


int main()
{
    int len=0;
    cin>>len;
    string s[len];
    
    cin.get();

    for(int i=0;i<len;i++)
    {
      getline(cin,s[i]);   
    }
    
    int key;
    string order,reverse;
    cin>>key>>order>>reverse;
    
    
    pair<string,string> strPair[len];

    for(int i=0;i<len;i++)
    {
        strPair[i].first=s[i];
        strPair[i].second=tokenOfKey(s[i],key);
    }

    if(order=="lexographic")
    {
        sort(strPair,strPair+len,lexo);
    }
    else{
        sort(strPair,strPair+len,numeric);
    }

    if(reverse=="true")
    { 
       int i=0,j=len-1;
        while(i<j)
        {
            swap(strPair[i],strPair[j]);
            i++;
            j--;
        }
    }

        for(int i=0;i<len;i++)
        {
            cout<<strPair[i].first<<endl;
        }
    
}