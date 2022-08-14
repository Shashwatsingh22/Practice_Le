//https://www.codechef.com/AUG221D/problems/SMALLXOR

#include <bits/stdc++.h>
using namespace std;


void solve(int sizeArr_N,int times_Y,int num_X,int v[])
{
  //First We will push this vector to our min_heap priority queue;
  
  priority_queue<int, vector<int>, greater<int>> min_heap;
  
  for(int i=0;i<sizeArr_N;i++) min_heap.push(v[i]);
  
  
  while(times_Y)
  {   
     //Here we will do xor
     //If we get the value which is smaller than previous one of same index then we can come to an conclusion that number is now repeating
     //lets break this loop becoz we got out base array now to xor according to its nature
     //like if left times even then no need to do xor
     // if left times odd the need one time xor and we are done.
     
     // min value at the top
     
     int minValue=min_heap.top();
     if((minValue^num_X)<minValue) break;
     else
     {
         //Remove last element
         min_heap.pop();
         //push new xor greater element then last one
         min_heap.push(minValue^num_X);
         times_Y--;
     }
     
  }
  
  //checking left value is odd
  if(times_Y%2!=0)
  {
    int minValue=min_heap.top();
    min_heap.pop();
    min_heap.push(minValue^num_X);
  }
  
  while(!min_heap.empty())
  {
     cout<<min_heap.top()<<" ";
     min_heap.pop();
  }
  cout<<endl;
  
  return;
}

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	
	while(t--)
	{
	    int sizeArr_N=0;
	    int times_Y=0;
	    int num_X=0;
	    cin>>sizeArr_N>>num_X>>times_Y;
	    
	    int v[sizeArr_N]={0};
	    
	    for(int i=0;i<sizeArr_N;i++) cin>>v[i];
	    
	    solve(sizeArr_N,times_Y,num_X,v);
	    
	}
	return 0;
}
