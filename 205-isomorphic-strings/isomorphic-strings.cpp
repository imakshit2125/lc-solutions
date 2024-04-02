class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp,up;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=t[i];
            }
            else
            {
                if(mp[s[i]]!=t[i])
                return false;
            }
        }
        
        for(int i=0;i<t.size();i++)
        {
            if(up.find(t[i])==up.end())
            {
                up[t[i]]=s[i];
            }
            else
            {
                if(up[t[i]]!=s[i])
                return false;
            }
        }
        return true;
    }
};