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
     void revert(TreeNode* &root, TreeNode* &ans, int count, TreeNode* &head)
    {
        if(!root)return;
        
        if(count%2 != 0)swap(root->val, ans->val);
        
        revert(root->right, ans->left, count+1, head);
        if(root == head)
            return;
        revert(root->left, ans->right, count+1, head);
        
    }
    TreeNode* reverseOddLevels(TreeNode* root) {
        TreeNode *ans =root;
        revert(root,ans,0,root);
        return ans;
    }
};