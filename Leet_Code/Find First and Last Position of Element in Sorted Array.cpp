class Solution {
public:
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> pos={-1,-1};
        int i=0;
        int j=nums.size();
        
        int start=0;
        int last=0;
        
        if(nums.empty())
        {
          return pos;   
        }
        else
        {
        while(i<=j)
        {
          if(nums[i]==target && start==0)
          {
              pos[0]=i;
              start=1;
          }
          
          if(nums[j]==target && last==0)
          {
            pos[1]=j;
            last=1;
          }
            
          i++;
          j--;
            
        }
        }
        if(start==1 || last==1)
        {
          return pos; 
        }
        else
        {
          return pos;
        }
    }
};