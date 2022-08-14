//https://www.codechef.com/AUG221D/problems/SALESEASON
#include <iostream>
using namespace std;

int anyDiscount(int p)
{
    if(p<=100) return p;
    
    else if(p>100 && p<=1000) return p-25;
    
    else if(p>1000 && p<=5000) return p-100;
    
    else return p-500;
}

int main() {
	int t=0;
	cin>>t;
	
	while(t--)
	{
	    int price=0;
	    cin>>price;
	    cout<<anyDiscount(price)<<endl;
	}
	return 0;
}
