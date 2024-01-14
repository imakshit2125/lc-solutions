class Solution {
public:
    bool check(int i,string &s,string &a,int k)
    {
        string p = s.substr(i,a.size());
 
        if(p==a)
            return true;
        else 
            return false;
    }
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        
        vector<int>ans;
        vector<int>ans1,ans2;
        if(s.size()<a.size() or s.size()<b.size())
            return {};
        
        for(int i=0;i<=s.size()-a.size();i++)
        {

            if(check(i,s,a,k))
               ans1.push_back(i);
            
        }

        for(int i=0;i<=s.size()-b.size();i++)
        {

            if(check(i,s,b,k))
               ans2.push_back(i);
            
        }
        
 
        
        for(int i=0;i<ans1.size();i++)
        {
            auto  l = lower_bound(ans2.begin(),ans2.end(),ans1[i]-k);

            if((l!=ans2.end()) and (abs(*l-ans1[i])<=k))
                ans.push_back(ans1[i]);
        }
        
        return ans;
    }
};