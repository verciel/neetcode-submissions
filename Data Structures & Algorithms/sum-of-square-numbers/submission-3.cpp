class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        vector<long long> nums;
        nums.push_back(0);

        for(long long i=1; 1LL*i*i<=c; i++)
        {
            nums.push_back(i*i);
        }

        int l=0, r=nums.size()-1;
        while(l<=r)
        {
            if(nums[l] + nums[r] == c) return true; 
            if(nums[l] + nums[r] < c) l++;
            else r--;
        }
        
        return false;
    }
};
