class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>mp;

        for(auto it:nums)
        mp[it]++;

        for(auto it:mp)
        {
            if(it.second==1)
            return -1;
            else
            {
                ans+=(it.second/3)-1;
                int k = it.second%3;
                if(k==1)
                ans+=2;
                else if(k==2)
                {
                    ans+=2;
                }
                else if(k==0)
                ans++;
            }
        }

        return ans;
    }
};