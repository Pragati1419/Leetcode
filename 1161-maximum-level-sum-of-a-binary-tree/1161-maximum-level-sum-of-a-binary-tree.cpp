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
    void fun(TreeNode* root , int level , vector<int>&v){
        if(root==NULL)
            return;
        if(v.size()==level){
            v.push_back(root->val);
        }
        else{
            v[level]+=root->val;
        }
        fun(root->left,level+1,v);
        fun(root->right,level+1,v);
    }
    int maxLevelSum(TreeNode* root) {
        vector<int>v;
        fun(root,0,v);
        int maxi=INT_MIN;
        int ans=0;
        for(int i=0;i<v.size();i++){
        if(maxi<v[i]){
            maxi=v[i];
            ans=i+1;
        }
        }
        return ans;
    }
};