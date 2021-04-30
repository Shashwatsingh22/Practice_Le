#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    
    int A[10000]={0};
    int ptr=2;

    A[0]=1;

    int length=1;
    int size=0;

    int digit=0;
    while(ptr<=num)
    {
        while(size<length)
        {
          A[size]*=ptr;
          

          digit=A[size]/10;
          A[size]%=10;

          size++;
        }
         
        while(digit!=0)
        {
            A[length]=digit%10;
            digit=digit/10;
            
        } 
        ptr++;
    }
}