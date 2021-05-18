//String Tokenizer is used to Convert an String into the list of Tokens.
#include <iostream>
#include<cstring>
using namespace std;

char *CustomStrTok(char *ch,char delim)
{
   static char *data='\0';

   if(ch!='\0')
   {
       data=ch;
   }
   if(data=='\0')
   {
       return NULL;
   }
   char *d= new char[strlen(data)+1];

   int i=0;
   for(;data[i]!='\0';i++)
   {
       if(data[i]!=delim)
       {
        d[i]=data[i];
       }
       else
       {
           d[i]='\0';
           data=data+i+1;
           return d;
       }
   }
   d[i]=NULL;
   data=NULL;
   return d;
}

int main()
{
     char st[100]="Hi this Shashwat Sing ! Love C++";
     
     //strtok(StringContainer,Delimeters)
     /*char *ptr = strtok(st," ");
     while(ptr!=NULL)
     {
         ptr=strtok(NULL," ");
         cout<<ptr<<endl;
     }*/
     cout<<endl;
     char *ptr = CustomStrTok(st,' ');
     while(ptr!=NULL)
     {
         ptr=CustomStrTok(NULL,' ');
         cout<<ptr<<endl;
     }

}