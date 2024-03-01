class Solution {
public:
    string maximumOddBinaryNumber(string s) {


        string ans;
        int c=0;
        for(int i=0;i<s.size();i++)
        if(s[i]=='1')
        c++;


        if(c==1)
        {
            
            for(int i=0;i<s.size()-1;i++)
            ans.push_back('0');
            ans.push_back('1');
        }
        else if(c==2)
        {
            
             ans.push_back('1');
            for(int i=0;i<s.size()-2;i++)
            ans.push_back('0');
             ans.push_back('1');

        }
        else
        {
            
             ans.push_back('1');
            for(int i=0;i<c-2;i++)
            ans.push_back('1');
            for(int i=0;i<s.size()-c;i++)
            ans.push_back('0');
             ans.push_back('1');
        }
        
        return ans;
    }
};