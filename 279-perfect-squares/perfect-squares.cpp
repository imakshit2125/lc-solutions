class Solution {
public:
    int numSquares(int n) {
          if(n<=3)
            return n;
        vector<int>dp(n+1,0);
        dp[0]=0,dp[1]=1,dp[2]=2,dp[3]=3;
        
        for(int i=4;i<=n;i++)
        {
            int  k = sqrt(i);
            int ans=INT_MAX;
            for(int j=1;j<=k;j++)
            {
                ans=min(ans,dp[i-(j*j)]);
            }
            dp[i]=ans+1;
        }
        
        return dp[n];
    }
};