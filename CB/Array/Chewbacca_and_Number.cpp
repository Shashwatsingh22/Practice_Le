#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	long long int num;
	cin>>num;

    vector <int> v;

	while(num)
	{
		int value=0;
		value = num%10;
		num=num/10;
		value=min(value,9-value);
		if(num==0 && value==0)
		{
          v.push_back(9);
		}
		else
		{
			v.push_back(value);
		}
	}
     
	for(int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i];
	} 
	return 0;
}