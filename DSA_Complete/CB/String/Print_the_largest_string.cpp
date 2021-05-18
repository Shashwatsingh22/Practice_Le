#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    char maxStr[100];
    int max=INT_MIN;
    cin>>n;

    cin.get();
    while(n--)
    {
       char A[100];
       int len=0;
       cin.getline(A,100,'\n');
       len=strlen(A);
       if(len>max)
       {
         max=len;
         strcpy(maxStr,A);
       }

    }
    cout<<max<<" "<<maxStr<<endl;
}