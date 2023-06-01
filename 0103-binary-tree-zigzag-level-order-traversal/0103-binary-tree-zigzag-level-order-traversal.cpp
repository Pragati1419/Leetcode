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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
       vector<vector<int>>v;
        if(root==NULL)
            return v;
        queue<TreeNode*>q;
        q.push(root);
        bool lefttoRight = true;
        while(!q.empty()){
            int size = q.size();
            vector<int>row(size);
            for(int i = 0 ;i<size;i++){
                TreeNode *temp = q.front();
                q.pop();
                
                //position to fill node values
                int ind = (lefttoRight) ? i : (size-1-i);
                row[ind]=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
                //after this level
                lefttoRight = !lefttoRight;
                v.push_back(row);
        }
            return v;
    }
};