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
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
     /*   stack<TreeNode*>s;
        TreeNode *temp=root;
        vector<int>v;
        while(true){
            if(temp!=NULL){
                s.push(temp);
                temp=temp->left;
            }
            else{
                if(s.empty()==true)
                    break;
                temp=s.top();
                s.pop();
                v.push_back(temp->val);
                temp=temp->right;
            }
        }
        return v;
        */
        vector<int>v;
        inorder(root,v);
        return v;
    }
};