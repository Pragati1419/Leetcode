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
    vector<vector<int>> levelOrder(TreeNode* root) {
      vector<vector<int>> out;
        if (root == nullptr) return out;
        queue<TreeNode*> q;
        q.push(root);
        
        while (!q.empty()) {
            vector<int> level;
            for (int i = q.size(); i > 0; i--) {
                auto front = q.front();
                q.pop();
                level.push_back(front->val);
                if (front->left != nullptr) q.push(front->left);
                if (front->right != nullptr) q.push(front->right);
            }
            out.push_back(level);
        }
        
        return out;
        
        
    }
};