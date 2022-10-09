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
   bool value(TreeNode* root)
    {
        if(root->val<=1) return root->val;
        if(root->val==2) return (value(root->left) || value(root->right));
        return  (value(root->left) && value(root->right));
    }
    bool evaluateTree(TreeNode* root) {
        return value(root);
    }
};