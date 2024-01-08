class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        vector<unordered_map<long,int>>dp(nums.size());
        int ans=0;
        for(int i=1;i<nums.size();i++)
        {
            for(int j=0;j<i;j++)
            {
                long diff = (long)nums[i]-nums[j];

                if (diff>INT_MAX or diff<=INT_MIN) {
                    continue;
                }

                dp[i][diff]+=1;

                if(dp[j].find(diff)!=dp[j].end())
                {
                    dp[i][diff]+=dp[j][diff];
                    ans+=dp[j][diff];
                }
            }
        }
        return ans;
    }
};