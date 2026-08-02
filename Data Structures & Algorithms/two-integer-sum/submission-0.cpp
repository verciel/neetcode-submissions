class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(nums[i]) == mp.end())
            {
                mp[target-nums[i]]=i;
            }
            else
            {
                ans.push_back(mp[nums[i]]);
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
