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
     int solve(TreeNode* n, int maxValue) {
         if(!n) 
        return 0;
    int maxTmp = max(maxValue, n->val);
    return solve(n->right, maxTmp) + solve(n->left, maxTmp) + (n->val >= maxValue);
  }

    int goodNodes(TreeNode* root) {
        return solve(root,root->val);
    }
};