class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        vector<vector<int>>ans;
        vector<int>p;
        for(int i=0;i<nums.size();i+=3)
        {
            if(nums[i]-nums[i+1]<=k  and nums[i]-nums[i+2]<=k and nums[i+1]-nums[i+2]<=k and nums[i+1]-nums[i]<=k and nums[i+2]-nums[i+1]<=k and nums[i+2]-nums[i]<=k)
            ans.push_back({nums[i],nums[i+1],nums[i+2]});
            else
            return {};
        }

        return ans;
    }
};