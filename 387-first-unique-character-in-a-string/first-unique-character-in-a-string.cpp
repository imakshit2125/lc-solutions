class Solution {
public:
    int firstUniqChar(string s) {
        vector<int>vis(26,0);
        
        for(auto it:s)
            vis[it-'a']++;
        
        for(int i=0;i<s.size();i++)
        {
            if(vis[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};