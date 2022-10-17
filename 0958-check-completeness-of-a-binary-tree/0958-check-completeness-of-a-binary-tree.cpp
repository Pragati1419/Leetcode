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
     int countt(TreeNode *root)                            
  {
      if(root==NULL)
      return 0;
      
      return 1+countt(root->left)+countt(root->right);
  }
    bool iscomplete(TreeNode *root,int index,int count)                   
  {
      if(root==NULL)
      return 1;
      
      if(index>=count)
      return false;
      
      return iscomplete(root->left,2*index+1,count) && iscomplete(root->right,2*index+2,count);
  }
    bool isCompleteTree(TreeNode* root) {
         int count=countt(root);
        int index=0;
        return iscomplete(root,0,count);
    }
};