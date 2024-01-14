class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int ans=0;
        map<int,int>mp;
        int mx=0;
        for(auto it:nums){
            mp[it]++;
            mx=max(mx,mp[it]);
            }
        
        for(auto it:mp)
        {
            if(it.second==mx)
                ans+=mx;
        }
        return ans;
        
    }
};