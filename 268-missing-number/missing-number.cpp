class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=0;
        int i=0;
        while(n<nums.size())
        {
            if(nums[i]!=n)
            return n;
            i++;
            n++;
        }
        return n;
        
    }
};