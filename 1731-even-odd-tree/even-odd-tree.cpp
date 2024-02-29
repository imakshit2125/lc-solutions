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
    bool isEvenOddTree(TreeNode* root) {
        
        vector<vector<int>>vec;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n = q.size();
            vector<int>arr;
            for(int i=0;i<n;i++)
            {
                TreeNode* k = q.front();
                q.pop();
                
                arr.push_back(k->val);
                if(k->left)
                    q.push(k->left);
                if(k->right)
                    q.push(k->right);
            }
            vec.push_back(arr);
            arr.clear();
        }
        
        /*
        for(auto it:vec)
        {
            for(auto ut:it)
                cout<<ut<<" ";
            cout<<endl;
        }
        */
        
        for(int i=0;i<vec.size();i++)
        {
            if(i%2==0){
                for(int j=0;j<vec[i].size();j++)
                {
                    if(vec[i][j]%2==0)
                        return false;
                    else{
                        if(j!=0)
                        {
                            if(vec[i][j]<=vec[i][j-1])
                                return false;
                        }
                    }
                }
            }
            else
            {
                for(int j=0;j<vec[i].size();j++)
                {
                    if(vec[i][j]%2==1)
                        return false;
                    else{
                        if(j!=0)
                        {
                            if(vec[i][j]>=vec[i][j-1])
                                return false;
                        }
                    }
                }
                
            } 
        }
        
        return true;
        
        
        return false;
    }
};