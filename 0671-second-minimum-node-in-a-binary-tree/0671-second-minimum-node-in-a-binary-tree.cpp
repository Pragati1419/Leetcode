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
 set <int> s;
    
    void Solve(TreeNode * root)
    {
        if(!root)
            return ;
        Solve(root->left);
        s.insert(root->val);
        Solve(root->right);
        
    }
    
public:
    int findSecondMinimumValue(TreeNode* root) {
        
        Solve(root);
        
          if(s.size()==1)
           return -1 ;
          s.erase(s.begin());
        
          return *s.begin();
    }
};