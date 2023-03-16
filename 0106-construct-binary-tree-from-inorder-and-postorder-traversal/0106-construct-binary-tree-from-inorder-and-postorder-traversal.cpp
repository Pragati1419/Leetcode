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
   TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    map<int, int>m;
    for(int i=0; i<inorder.size(); i++){m[inorder[i]]=i;}
    TreeNode* root=formtree(inorder, 0, inorder.size()-1, postorder, 0, postorder.size()-1, m);
    return root;
}
    
TreeNode* formtree(vector<int>& inorder, int inst, int inen, vector<int>& postorder, int post, int poen, map<int, int>&m){
    if(inst>inen || post>poen){return NULL;}
    TreeNode* root= new TreeNode(postorder[poen]);
    int pos=m[postorder[poen]];
    int rght=pos-inst;
    root->left=formtree(inorder, inst, pos-1, postorder, post, post+rght-1, m);
    root->right=formtree(inorder, pos+1, inen, postorder, post+rght, poen-1, m);
    return root;
}

};