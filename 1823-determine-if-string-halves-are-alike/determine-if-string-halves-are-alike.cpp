class Solution {
public:
    bool halvesAreAlike(string s) {
         map<char,int>mp,up;
        
        for(int i=0;i<s.size()/2;i++)
        {
            mp[s[i]]++;
        }
        
         for(int i=s.size()/2;i<s.size();i++)
        {
            up[s[i]]++;
        }
        
        int cnt1=0,cnt2=0;
        
        cnt1=mp['A']+mp['E']+mp['I']+mp['O']+mp['U']+mp['a']+mp['e']+mp['i']+mp['o']+mp['u'];
        cnt2=up['A']+up['E']+up['I']+up['O']+up['U']+up['a']+up['e']+up['i']+up['o']+up['u'];
        
        
        if(cnt1==cnt2)
            return true;
        return false;
    }
};