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
        void PreOrder(TreeNode * root, vector<int> &store)
    {
        if(!root)
            return ;
        if(!root->left && !root->right)
        {
            store.push_back(root->val);
            return ;
        }
        PreOrder(root->left, store);
        PreOrder(root->right, store);
    }
    
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
       vector<int>  rightTree, leftTree;
        
        PreOrder(root1, leftTree);
        PreOrder(root2, rightTree);
        
        return leftTree == rightTree;
    }
};