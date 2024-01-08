class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<int>dp(nums.size(),0);
        int ans=0;
        for(int i=2;i<nums.size();i++)
        {
            for(int j=i-2;j>=0;j--)
            {
                if(nums[j+1]-nums[j]==nums[i]-nums[i-1])
                dp[i]+=1;
                else
                break;
            }
        }

        for(auto it:dp)
        ans+=it;
        for(auto it:dp)
        cout<<it<<" ";

        return ans;
    }
};