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
    int findDepth(TreeNode* root, int val, int depth) {
    if (root == NULL)
        return -1;

    if (root->val == val)
        return depth;

    int leftDepth = findDepth(root->left, val, depth + 1);
    if (leftDepth != -1)
        return leftDepth;

    int rightDepth = findDepth(root->right, val, depth + 1);
    return rightDepth;
}

bool isSibling(TreeNode* root, int x, int y) {
    if (root == NULL)
        return false;

    if (root->left != NULL&& root->right != NULL) {
        if ((root->left->val == x && root->right->val == y) ||
            (root->left->val == y && root->right->val == x))
            return true;
    }

    return isSibling(root->left, x, y) || isSibling(root->right, x, y);
}

    bool isCousins(TreeNode* root, int x, int y) {
        int xDepth = findDepth(root, x, 0);
    int yDepth = findDepth(root, y, 0);

    if (xDepth == yDepth && !isSibling(root, x, y))
        return true;

    return false; 
    }
};