class Solution {
public:
    int rob(vector<int>& nums) {
        
        int ans=0;
        vector<int>dp(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(i<=1)
            dp[i]=nums[i];
            else
            {
                for(int j=0;j<i-1;j++)
                {
                    dp[i]=max(dp[i],nums[i]+dp[j]);
                }
            }

            ans=max(ans,dp[i]);
        }
        // for(auto it :dp)
        // cout<<it<<" ";
        
        return ans;    }
};