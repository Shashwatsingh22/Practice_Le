#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicate(char A[])
{
    int i=0,j=1;
    while (j<strlen(A))
    {
        if(A[i]!=A[j])
        {
            i++;
            A[i]=A[j];
        }
        j++;
    }
    A[j+1]='\0';
    return;
}

int main()
{
    char A[100];
    cin.getline(A,100,'\n');
    removeDuplicate(A);
    cout<<A<<endl;
}