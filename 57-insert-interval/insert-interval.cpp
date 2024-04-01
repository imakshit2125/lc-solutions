class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr, vector<int>& newInterval) {
        
        arr.push_back(newInterval);
        sort(arr.begin(),arr.end());
        
        
        vector<vector<int>>vec;
        int k = arr[0][0];
        int l = arr[0][1];
        vector<int>ans;
        ans.push_back(k);
        int i=0;
        for(int j=1;j<arr.size();j++)
        {
            if(arr[j][0]<=l)
            {
                if(l<arr[j][1])
                l=arr[j][1];
                else
                    continue;
            }
            else
            {
                ans.push_back(l);
                vec.push_back(ans);
                ans.clear();
                i++;
                k=arr[j][0];
                l=arr[j][1];
                ans.push_back(k);
                
            }
        }
        ans.push_back(l);
        vec.push_back(ans);
        ans.clear();
        
        return vec;
        
    }
};