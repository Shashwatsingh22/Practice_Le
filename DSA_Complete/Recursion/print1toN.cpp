#include<iostream>
using namespace std;

int factorial(int n)
{
   if(n==1) return 1;
   return n*factorial(n-1);
}

void solve1toN(int n)
{
    if(n<=0) return;
    solve1toN(n-1);
    cout<<n<<" ";
}

void solveNto1(int n)
{ 
    if(n<=0) return;
    cout<<n<<" ";
    solveNto1(n-1);
}

int main()
{
    int num;
    cin>>num;
    solveNto1(num);
}