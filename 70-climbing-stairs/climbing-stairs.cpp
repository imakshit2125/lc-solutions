class Solution {
public:
      int rec(int k,vector<int>&dp)
    {
        if(k<=2){
        dp[k]=k;
        }
        if(dp[k]!=-1)
        return dp[k];
        dp[k]=rec(k-1,dp)+rec(k-2,dp);
        return dp[k];
    }
    int climbStairs(int n) {
        vector<int>dp(n+1,-1);
        rec(n,dp);
        return dp[n];
    }
};