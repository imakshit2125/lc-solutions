class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int,int>mp;
        for(auto it:arr)
        mp[it]++;
        
        vector<int>vec;
        for(auto it:mp)
        vec.push_back(it.second);
        sort(vec.begin(),vec.end());

        for(auto &it:vec)
        {
            int n=k;
            // cout<<n<<endl;
            
            if(n>=it){
            k=k-it;
            it=0;
            }
            else
             break;
            
            if(k==0)
            break;
        }

          int ans=0;
        for(auto it:vec)
        {
            // cout<<it<<" ";  
            if(it!=0)
            ans++;
        }

        return ans;
    }
};