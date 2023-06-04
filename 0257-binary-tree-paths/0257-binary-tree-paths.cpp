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
     void getPath(TreeNode * root, vector<string>&ans, string s)
    {
        if(!root)return;
        if(!root->left && !root->right)
        {
            s += to_string(root->val);
            ans.push_back(s);
        }
        s += to_string(root->val);
        getPath(root->left, ans, s+"->");
        getPath(root->right, ans, s+"->");
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string s = "";
        vector<string>ans;
        getPath(root ,ans, s);
            return ans;
        
       
    }
};