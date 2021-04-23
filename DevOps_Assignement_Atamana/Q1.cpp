/*
1. You are given 1 string of alphabetical characters. Each character can
occur 1 or more times. Put every third character into an array (3rd, 6th
, 9
th
,
12th,..........). Print the arrays and also the maximum recurring element.
 Sample Input 1:
 S = “abcbjjfgqaazckuccccpcp”
 Sample Output:
 [ c, j, g, a, k, c, c]
 Maximum recurring character: c
 */

#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string st)
{ 
   int n=st.length();
   int count=0;
   
   vector <char> v1; 
   
    int A[256]={0};
    int max=0;
    char max_occur_char;
   for(int i=0;i<n;i++)
   {
       if((i+1)%3==0)
       {
          v1.push_back(st[i]);
       }
   }
   
   cout<<'[';
   for(int i=0;i<v1.size();i++)
   {
       cout<<v1[i]<<','<<" ";
       A[(int)v1[i]]++;
       if(max<A[(int)v1[i]])
       {
           max=A[(int)v1[i]];
           max_occur_char=v1[i];
       }
   }
   cout<<']'<<endl;
   cout<<max_occur_char<<endl;
}

int main()
{
   string st="abcbjjfgqaazckuccccpcp";
   solve(st);
}