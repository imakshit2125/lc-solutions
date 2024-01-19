class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        vector<vector<int>>dp(matrix.size(),vector<int>(matrix.size()));

        int ans=INT_MAX;

        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                if(i==0)
                {
                    dp[i][j]=matrix[i][j];
                }
                else if(j==0)
                {
                     dp[i][j]=matrix[i][j]+min(dp[i-1][j+1],dp[i-1][j]);
                }
                else if(j==matrix.size()-1)
                {
                    dp[i][j]=matrix[i][j]+min(dp[i-1][j-1],dp[i-1][j]);
                }
                else{
                    dp[i][j] = matrix[i][j] + min(dp[i-1][j-1],min(dp[i-1][j+1],dp[i-1][j]));
                }


                if(i==matrix.size()-1)
                ans=min(ans,dp[i][j]);
            }
        }

        // for(auto it:dp)
        // {
        //     for(auto ut :it)
        //     cout<<ut<<" ";
        //     cout<<endl;
        // }

        return ans;
    }
};