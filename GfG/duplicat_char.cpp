#include<iostream>
#include<string>
#include<vector>
using namespace std;

int inVector(char s, vector <char> c)
{
    for(int i=0;i<c.size();i++)
    {
        if(s == c[i])
        {
            return 1;
        }
    }
    return 0;
}

void duplicate(string s)
{
   vector <char> vec;
   
   for(int i=0;i<s.length();i++)
   { 
     if(inVector(s[i],vec))
     {
         break;
     }
     
     int num=0;
     for(int j=0;j<s.length();j++)
     {
         
         
         if(s[i]==s[j])
         {
            num+=1; 
         }
     }
     if(num>1)
     {
         cout<<s[i]<<" is "<<num<<" times repeated."<<endl;
         vec.push_back(s[i]);
     }
   }
}

int main()
{
    string s = "test string";
    
    duplicate(s);
}