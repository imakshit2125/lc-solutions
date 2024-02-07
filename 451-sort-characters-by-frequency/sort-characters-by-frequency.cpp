class Solution {
public:
    string frequencySort(string s) {
        sort(s.begin(),s.end());
        
        
        vector<pair<int,char>>vec;
        
        int cnt=1;
       for(int i=0;i<s.size()-1;i++)
       {
           if(s[i]==s[i+1])
           {
               cnt++;
           }
           else
           {
               vec.push_back({cnt,s[i]});
                   cnt=1;
           }
           
       }
        vec.push_back({cnt,s[s.size()-1]});
        
        sort(vec.begin(),vec.end());
        string ans;
        for(int i=vec.size()-1;i>=0;i--){
            for(int j=0;j<vec[i].first;j++)
                ans.push_back(vec[i].second);
        }
        
        return ans;
        
        
        
    }
};


        
