#include<iostream>
using namespace std;

void check_Operator(int a, int b)
{
    if(a>b)
    {
        cout<<">"<<endl;
    }
    else if(a<b)
    {
        cout<<"<"<<endl;
    }
    else
    {
        cout<<"="<<endl;
    }
    

}

int main()
{
    int num;
    while(num--)
    {
        int num1, num2;
        cin>>num1>>num2;
        check_Operator(num1,num2);
    }

}