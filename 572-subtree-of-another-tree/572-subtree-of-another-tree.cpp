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
    
    bool treeissame(TreeNode* root, TreeNode* subRoot)
    {
        if(!root&&!subRoot)
            return true;
        if(!root||!subRoot||root->val!=subRoot->val)
            return false;
        int lh=treeissame(root->left,subRoot->left);
        int rh=treeissame(root->right,subRoot->right);
        return lh&&rh;
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root||!subRoot)
            return false;
        if (treeissame(root,subRoot)){
            return true;
        }
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};