class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {

        vector<vector<string>>ans;
        vector<pair<string,int>>vec;
        int i=0;
        for(auto it:s)
        {
            string k = it;
            sort(k.begin(),k.end());
            vec.push_back({k,i});
            i++;
        }

        map<string,vector<int>>mp;

        for(auto it:vec)
        mp[it.first].push_back(it.second);

        // for(auto it:mp)
        // {
        //     cout<<it.first<<" ";
        //     for(auto ut :it.second)
        //     cout<<ut<<" ";
        //     cout<<endl;
        // }

        for(auto it:mp)
        {
            vector<string>p;
            for(auto ut:it.second)
            p.push_back(s[ut]);

            ans.push_back(p);
            p.clear();
        }
        return ans;
        
        
    }
};