class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         int n  =nums.size();
        
        map<int,int>mp,up;
        for(auto it:nums)
        {
            mp[it]++;
        }
        
        //int i=1;
        for(int i=1;i<=n;i++){
            up[i]++;
            
        }
        
        int ans1,ans2;
        for(auto it:up)
        {
            if(mp.find(it.first)==mp.end())
                ans2=it.first;
        }
        
        for(auto it:mp)
            if(it.second==2)
                ans1=it.first;
        
        return {ans1,ans2};
        
    }
};