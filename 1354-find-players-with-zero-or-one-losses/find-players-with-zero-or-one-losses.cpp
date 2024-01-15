class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int>mp,up;
        set<int>s;
        for(auto it:matches)
        {
            mp[it[0]]++;
            up[it[1]]++;

            s.insert(it[0]);
            s.insert(it[1]);
        }


        vector<int>p1,p2;
        for(auto it:s)
        {
            if(up[it]==0)
            p1.push_back(it);

            if(up[it]==1)
            p2.push_back(it);

        }

        return {{p1},{p2}};
    }
};