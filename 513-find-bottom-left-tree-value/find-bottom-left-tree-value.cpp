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
    int findBottomLeftValue(TreeNode* root) {

        if(root==NULL)
        return  -1;
        queue<TreeNode*>q;
        q.push(root);

        int ans=-1;
        while(!q.empty())
        {
            int n = q.size();
            int i=0;
            while(n--)
            {
                if(i==0)
                ans=q.front()->val;

                TreeNode * p = q.front();
                q.pop();

                if(p->left)
                q.push(p->left);

                if(p->right)
                q.push(p->right);
                i++;
            }
        }
        return ans;
        
    }
};