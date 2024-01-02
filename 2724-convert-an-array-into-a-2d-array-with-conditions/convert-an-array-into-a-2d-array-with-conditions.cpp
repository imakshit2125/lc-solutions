class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        int mx=INT_MIN;
        unordered_map<int,int>mp;
        for(auto it:nums){
        mp[it]++;
        mx=max(mx,mp[it]);
        }

        vector<vector<int>>ans(mx);

        for(auto it:mp)
        {
            for(int i=0;i<it.second;i++)
            ans[i].push_back(it.first);
        }


        return ans;

    }
};