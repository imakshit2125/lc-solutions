class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int i=0,j=1,k=0;
        while(k<nums.size())
        {
            if(nums[k]>0){
            ans[i]=nums[k];
            i=i+2;
            }
            else{
            ans[j]=nums[k];
            j=j+2;
            }
            k++;
        }
        return ans;  
    }
};