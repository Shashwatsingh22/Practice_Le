#include<iostream>
#include<cstring>
using namespace std;

int isPalindrom(char A[])
{
    int i=0;
    int j=strlen(A)-1;

    while(i<j)
    {
        if(A[i]!=A[j])
        {
          return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main()
{
    char A[100];
    cin.getline(A,100,'\n');
    cout<<isPalindrom(A);
}