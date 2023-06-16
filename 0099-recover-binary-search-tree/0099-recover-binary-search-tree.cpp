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
    void inorder(TreeNode* root , vector<int>&v){
        if(root==NULL)
            return;
        inorder(root->left , v);
        v.push_back(root->val);
        inorder(root->right ,v);
        
    }
    void recover(TreeNode* root,vector<int>& v,int& i){
         if(root == NULL)
             return;
        recover(root->left,v,i);
        root->val = v[i++];
        recover(root->right,v,i);
    }
    
    void recoverTree(TreeNode* root) {
     vector<int>v;
        int i=0;
        inorder(root ,v);
        sort(v.begin(),v.end());
        recover(root ,v,i);
            
    }
};