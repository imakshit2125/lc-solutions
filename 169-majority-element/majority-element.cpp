class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        map<int,int>mp;
        
        for(auto it: nums)
        {
            mp[it]++;
        }
        
        int ans=-1,cnt=-1;
        for(auto it : mp)
        {
            if(it.second>cnt)
            {
                cnt=it.second;
                ans=it.first;
            }
        }
        
        return ans;
    }
};