class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
         int len = nums.size();
        
        vector<vector<int>> dp(len);
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < len; i++) { 
            dp[i] = {nums[i]};
            for(int j = 0; j < i; j++) {
                if((nums[i] % nums[j] == 0) and (dp[i].size() <= dp[j].size())) {
                    dp[i] = dp[j];
                    dp[i].push_back(nums[i]);
                }
            }
        }
        
        vector<int> result;
        for(auto vec : dp) {
            if(vec.size() > result.size()) result = vec;
        }
        return result;
    }
};