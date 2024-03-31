class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>dp(nums.size(),1),count(nums.size(),1);
        int mx=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                if(nums[j]<nums[i])
                {
                    if(dp[i]==dp[j]+1)
                    {
                        count[i]+=count[j];
                    }
                    else if(dp[i]<dp[j]+1)
                    {
                        count[i]=count[j];
                    }

                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
            mx=max(mx,dp[i]);

            cout<<count[i]<<" ";
        }
        int ans=0;

        for(int i=0;i<dp.size();i++)
        {
            if(dp[i]==mx)
            ans+=count[i];
        }

        return ans;
     
    }
};

// 1 2 3 4 7 
// 1 2 4 5 7
// 1 2 3 5 7  


