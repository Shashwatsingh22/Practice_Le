#include<iostream>
#include<string>
using namespace std;

void magicalPark(char A[][1000],int m,int n,int k,int s)
{
   int success;
   for(int i=0;i<m;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(k>s)
           {
               success=0;
               break;
           }
           
           if(A[i][j]=='.')
           {
               s-=2;
           }
           else if(A[i][j]=='*')
           {
               s+=5;
           }
           else if(A[i][j]=='#')
           {
               break;
           }
           if(j!=n-1)
           {
               s-=1;
           }
           
       }
       if(success==0)
       {
           break;
       }
   }
   
   if(success)
   {
       cout<<"yes"<<endl;
       cout<<s<<endl;
   }
   else
   {
       cout<<"No"<<endl;
   }
}


int main()
{
    int row,col,k,s;
    
    cin>>row;
    cin>>col;
    cin>>k;
    cin>>s;
    
    char A[][1000]={{'.','.','*','.'},{'.','#','.','.'},{'*','*','.','.'},{'.','#','*','*'}};
    
    
    magicalPark(A,row,col,k,s);
}