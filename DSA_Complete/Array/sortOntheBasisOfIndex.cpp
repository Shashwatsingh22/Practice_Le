#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

//Method One by the Sorting methon (O(nlogn))
vector<int> solve1(vector<int> v)
{
    vector<int> even,odd;
    
    for(int i=0;i<v.size();i++)
    {
      if(i%2==0) even.push_back(v[i]);
      else odd.push_back(v[i]);
    }
    
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    
    int evenIndex=0;
    int oddIndex=0;
    
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0) v[i]=even[evenIndex++];
        
        else v[i]=odd[oddIndex++];
    }
    
    return v;
}

//Method Second by the Priority Qeueue

vector<int> solve2(vector<int> v)
{
    priority_queue<int> even,odd;
    for(int i=0;i<v.size();i++)
    {
        if(i%2==0) even.push(v[i]);
        else odd.push(v[i]);
    }

    for(int i=0;i<v.size();i++)
    {
        if(i%2==0)
        {
            v[i]=even.top();
            even.pop();
        }
        else
        {
            v[i]=odd.top();
            odd.pop();
        }
    }
    
    return v;
};