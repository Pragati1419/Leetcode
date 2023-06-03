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
    void Right(TreeNode* root , int level , vector<int>&v) {
        if(root==NULL)
            return ;
        if(v.size() == level)
            v.push_back(root->val);
        Right(root->right,level+1,v);
        Right(root->left ,level+1,v);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;
        Right(root , 0 , v);
        return v;
    }
};