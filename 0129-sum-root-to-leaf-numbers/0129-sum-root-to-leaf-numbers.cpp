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
    
    int pathSum=0;
    
    void solve(TreeNode* root, int val)
    {
        if(!root->left && !root->right)
        {
            pathSum += (10*val + root->val);
            return;
        }
        
        val = (10*val + root->val);
        
        if(root->left) solve(root->left, val);
        if(root->right) solve(root->right, val);
    }
    int sumNumbers(TreeNode* root) {
        solve(root , 0);
        return pathSum;
    }
};