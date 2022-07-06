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
    void sum(TreeNode* root,int& low,int& high ,int &ans)
{
    if(root->val >= low && root->val <= high)
        ans += root -> val;
    
    if(root->left)
        sum(root->left,low,high,ans);
    if(root->right)
        sum(root->right,low,high,ans);
    return ;
}

int rangeSumBST(TreeNode* root, int low, int high) {
    if(!root)
        return 0;
    int ans = 0;
    sum(root ,low ,high,ans);
    return ans;
}
};