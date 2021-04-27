/*The first line contains an integer t , the no. of testcases. 
There are two inputs in each line. Each of them contains a 
single number. It is guaranteed that the numbers are made 
from 0 and 1 only and that their length is same. The numbers 
may start with 0.

Constraints
The length of each number doesn't exceed 100.

Output Format
Write t lines — the corresponding answer to the corresponding input. 
Do not omit the leading 0s.

Sample Input
1
10111 10000
Sample Output
00111
Explanation
For the given example, Let str1 = "10111" and str2 = "10000", 
Value at first position of str1 is 1 and first position str2 is 1, 
hence according to the rule there will be 0 at the first position of 
the final ans.Similarly, for second position the value at second 
position of both of the strings is 0,so , there will be 0 at 
the second position of the final ans.Similarly, for third position 
the value at third position of str1 is 1 and str2 is 0,so , 
there will be 1 at the third position of the final ans and So, on.
*/

#include<iostream>
#include<string>
using namespace std;


string soln(string st1,string st2)
{
  int i=0,j=0,len1=st1.length(),len2=st2.length();
  string ans;

  while(i<len1 && j<len2)
  {
	if(st1[i]==st2[j])
	{
      ans.append("0");
	  i++;
	  j++;
	}
	else
	{
		ans.append("1");
		i++;
	    j++;
	}
  }
  for(;i<len1;i++)
  {
    ans.append("1");
  }
  for(;j<len2;j++)
  {
    ans.append("1");
  }
  cout<<ans;
  return ans;
}

int main() {
    int num;
	cin>>num;
	while(num--)
	{
		string st1,st2;
        cin>>st1>>st2;
		cout<<soln(st1,st2);
	}

	return 0;
}