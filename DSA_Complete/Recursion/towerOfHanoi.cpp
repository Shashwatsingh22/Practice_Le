#include<iostream>
#include<string>
using namespace std;

int solve(int discs,string source,string dest,string helper)
{
    if(discs==1)
    {
        
        cout<<discs<<" Puting the Big Plate From "<<source<<" to "<<dest<<endl;
        return 1;
    }
    int steps=0;
    //First Puting the N-1 plates to helper so that last big plate come to destination (By the help of dest tower)
    steps+=solve(discs-1,source,helper,dest);
    cout<<discs<<" Putting Smaller Plated From "<<source<<" to "<<dest<<endl;

    //At last Putting all the small plates from helper to destination
    steps+=solve(discs-1,helper,dest,source);
    cout<<discs<<" Putting Smaller plates from "<<source<<" to "<<dest<<endl;

    return steps;
}

int main()
{
    int numOfDisc;
    cin>>numOfDisc;
    cout<<"Total Number of Steps "<<solve(numOfDisc,"Source","Dest","Helper");
}