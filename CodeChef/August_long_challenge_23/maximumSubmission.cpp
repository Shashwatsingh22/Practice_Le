//https://www.codechef.com/AUG221D/problems/MAXIMUMSUBS

#include <iostream>
using namespace std;


int numOfSub(int t)
{
    if(t==0) return 0;
    
    return t*2;
}

int main() {
    int t=0;
    cin>>t;
	while(t--)
	{
	   int time=0;
	   cin>>time;
	   cout<<numOfSub(time)<<endl;
	}
	return 0;
}
