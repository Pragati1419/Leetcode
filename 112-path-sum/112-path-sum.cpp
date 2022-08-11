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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL)
            return 0;
        if(!root->left and !root->right)
        {
            if(root->val==targetSum) 
                return true;
            return false;
        }
        bool ls = hasPathSum(root->left,targetSum-root->val);
        bool rs = hasPathSum(root->right,targetSum-root->val);
        return ls or rs;
        
    }
};