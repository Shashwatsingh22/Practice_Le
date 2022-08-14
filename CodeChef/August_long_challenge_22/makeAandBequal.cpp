//https://www.codechef.com/AUG221D/problems/EQUALISE
#include <iostream>
using namespace std;

bool mult(int num1,int num2)
{
    if(num1==num2) return true;
    else if(num1>num2) return false;
    
    num1*=2;
    return mult(num1,num2);
}

string canEqual(int num1,int num2)
{
    int minN = min(num1,num2);
    int maxN = max(num1,num2);
    
    if(mult(minN,maxN)) return "YES";
    
    return "NO";
}

int main() {
	int t=0;
	cin>>t;
	
	while(t--)
	{
	    int num1=0,num2=0;
	    cin>>num1>>num2;
	    cout<<canEqual(num1,num2)<<endl;
	}
	return 0;
}
