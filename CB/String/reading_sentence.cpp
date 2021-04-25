#include<iostream>
using namespace std;

void readline(char A[],int n,char deli)
{
    int i=0;
    char ch=cin.get();
    while(ch!=deli) //Delimeter So that we can stop the taking the input at that point
    {
        A[i]=ch;
        i++;
        if(i==n-1)
        {
            break;
        }
        ch=cin.get();
    }
    A[i]='\0';
    return;
}

int main()
{
    int len;
   cin>>len;
   //char A[100];
   //readline(A,len,'\n');
   
   /*
   C++ provide an by predefined 
   an function to take the input of the Char that is getline;
  */
   cin.getline(A,100,'#');
   
   cout<<A<<endl;
}