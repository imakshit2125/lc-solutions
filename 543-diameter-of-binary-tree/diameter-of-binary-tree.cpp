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
    int diameterOfBinaryTree(TreeNode* root) {
         int ans = 0; 
        
        function<int(TreeNode*)> fn = [&](TreeNode* node) {
            if (!node) return 0; 
            int left = fn(node->left), right = fn(node->right); 
            ans = max(ans, left + right); 
            return 1 + max(left, right); 
        }; 
        
        fn(root); 
        return ans; 
    }
};