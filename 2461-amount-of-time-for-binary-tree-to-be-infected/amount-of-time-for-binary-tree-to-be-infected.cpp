/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    unordered_map<int,vector<int>>mp;
    
    void makeGraph(TreeNode*root)
    {
        queue<pair<TreeNode*,int>>q;
        
        q.push({root,-1});
        
        while(!q.empty())
        {
            auto k = q.front();
            q.pop();
            
            if(k.second!=-1){
                mp[k.second].push_back(k.first->val);
                mp[k.first->val].push_back(k.second);
            }
            
            if(k.first->left)
                q.push({k.first->left,k.first->val});
            if(k.first->right)
                q.push({k.first->right,k.first->val});
        }
    }
    int amountOfTime(TreeNode* root, int start) {
        
        makeGraph(root);
        /*
        for(auto it:mp){
            cout<<it.first<<"->";
            for(auto ut:it.second)
                cout<<ut<<" ";
            cout<<endl;
        }*/
        
        unordered_map<int,bool>vis;
        
        queue<int>q;
        
        vis[start]=true;
        q.push(start);
        
        int ans=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                int k = q.front();
                q.pop();
                
                for(auto it:mp[k])
                {
                    if(vis[it]==false)
                    {
                        q.push(it);
                        vis[it]=true;
                    }
                }                
            }
            ans++;
        }
        
        return ans-1;
       
    }
};