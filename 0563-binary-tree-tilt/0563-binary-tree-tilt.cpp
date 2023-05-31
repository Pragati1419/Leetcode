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
    int fun(TreeNode* root , int &sum){
        if(root==NULL)
            return 0;
        int lr = fun(root->left , sum);
        int rr = fun(root->right , sum);
        int data = root->val;
        root->val=abs(lr-rr);
        sum+=root->val;
        return lr+rr+data;
    }
    int findTilt(TreeNode* root) {
        if(root==NULL)
            return 0;
        int sum =0;
        fun(root ,sum);
        return sum;
    }
};