//--> TLE <--
// https://leetcode.com/problems/count-of-smaller-numbers-after-self/submissions/
class Solution {
    
    int countSmall(vector<int> v,int index)
    {
        int count=0;
        int data=v[index];
        for(int i=index+1;i<v.size();i++)
        {
            if(data>v[i]) count++;
        }
        
        return count;
    }
    
public:
    vector<int> countSmaller(vector<int>& v) {
        if(!v.size()) return v;
        vector<int> ans;
        for(int i=0;i<v.size();i++)
        {
            ans.push_back(countSmall(v,i));
        }
        
        return ans;
     }
};