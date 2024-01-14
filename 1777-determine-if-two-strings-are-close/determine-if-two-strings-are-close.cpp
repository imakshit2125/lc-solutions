class Solution {
public:
    bool closeStrings(string s, string t) {

        if(s.size()!=t.size())
        return false;

        set<char>s1,s2;
        vector<int>v1(26,0),v2(26,0);
        for(auto it:s){
        s1.insert(it);
        v1[it-'a']++;
        }

        for(auto it:t){
        s2.insert(it);
        v2[it-'a']++;
        }
        sort(v2.begin(),v2.end());
        sort(v1.begin(),v1.end());

        return (v1==v2 and s1==s2);

    }
};