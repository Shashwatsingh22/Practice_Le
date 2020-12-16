#include<iostream>
#include<string>
#include<sstream> 
using namespace std;
 
string change_abb(string str)
{
    string result;
  if(str.length()>10)
  {
      int k=str.length()-2;
      stringstream ss;  
      ss<<k;  
      string s;  
      ss>>s;
    result+=str[0];
    result+=s;
    result+=str[str.length()-1];
  }
  else
  {
      result=str;
  }
  return result;
}
 
int main()
{
  string in_str;
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    cin>>in_str;
    cout<<change_abb(in_str)<<endl;
  }
}