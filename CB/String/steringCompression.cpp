/*

print out a3b2c2d1s1.

Input Format
A single String S

Constraints
1 < = length of String < = 1000

Output Format
The compressed String.

Sample Input
aaabbccds
Sample Output
a3b2c2d1s1

Explanation

In the given sample test case 'a' is repeated 3 times consecutively, 
'b' is repeated twice, 'c' is repeated twice and 'd and 's' occurred only once.

*/
#include<iostream>
using namespace std;

int main() {
	int count=0;
    string st;
	cin>>st;

	for(int i=0;i<st.length();i++)
	{
        count++;
		if(st[i+1]!=st[i])
		{
			cout<<st[i]<<count;
			count=0;
		}
	}

	return 0;
}