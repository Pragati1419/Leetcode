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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        if(root== NULL)
        {
            return ans;
        }
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        while(!q.empty())
        {
            TreeNode* node= q.front();
            q.pop();
            if(node!= NULL)
            {
                temp.push_back(node->val);
                if(node->left!= NULL)
                {
                    q.push(node->left);
                }
                if(node->right!= NULL)
                {
                    q.push(node->right);
                }
            }
            else
            {
                ans.push_back(temp);
                temp.clear();
                if(!q.empty())
                {
                    q.push(NULL);
                }
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    
    }
};