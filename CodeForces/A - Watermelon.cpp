#include<iostream>
#include<string>
using namespace std;
 
int main()
{
    int weight;
    cin>>weight;
    string soln = weight>2 && weight % 2==0 ? "Yes" : "No";
    cout<<soln;
}