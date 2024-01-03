class Solution {
public:
    int numberOfBeams(vector<string>& bank) {

        vector<int>ans;
        for(auto it:bank)
        {
            int p=0;
            for(auto ut:it)
            if(ut=='1')p++;

            if(p)
            ans.push_back(p);
        }

        if(ans.size()==0 or ans.size()==1)
        return 0;
        int fin=0;
        for(int i=0;i<ans.size()-1;i++)
        fin+=(ans[i]*ans[i+1]);
        
        return fin;
    }
};