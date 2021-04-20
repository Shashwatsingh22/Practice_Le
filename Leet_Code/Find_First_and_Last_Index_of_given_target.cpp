class Solution {
public:
    int first(vector<int>& nums,int target)
    {
        int res=-1;
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                end=mid-1;
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return res;
    }
    int last(vector<int>& nums,int target)
    {
        int res=-1;
        int start=0;
        int end=nums.size()-1;
        while(start<=end)
        {
              int mid=start+(end-start)/2;
            if(nums[mid]==target)
            {
                res=mid;
                start=mid+1;
            }
            else if(nums[mid]<target)
                start=mid+1;
            else
                end=mid-1;
        }
        return res;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int f=first(nums,target);
        int l=last(nums,target);
        vector<int> v;
        v.push_back(f);
        v.push_back(l);
        return v;
        
    }
};