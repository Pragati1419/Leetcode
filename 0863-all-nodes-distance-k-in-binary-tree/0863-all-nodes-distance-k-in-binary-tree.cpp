/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
     void markparents(TreeNode *root,unordered_map<TreeNode *,TreeNode *> &parents){
         queue<TreeNode*> q;
         q.push(root);
         while(!q.empty()){
             TreeNode *node=q.front();
             q.pop();
             if(node->left){
                 parents[node->left]=node;
                 q.push(node->left);
             }
             if(node->right){
                 parents[node->right]=node;
                 q.push(node->right);
             }
         }

    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode *,TreeNode *> parents;
        markparents(root,parents);
        unordered_map<TreeNode *,bool> visited;
        queue<TreeNode *> q;
        q.push(target);
        visited[target]=true;
        int curlevel=0;
        while(!q.empty()){
            int size=q.size();
            if(curlevel++==k)break;
        for(int i=0;i<size;i++){
            TreeNode *cur=q.front();
            q.pop();

            if(cur->left && !visited[cur->left]){
                q.push(cur->left);
                visited[cur->left]=true;
            }
             if(cur->right && !visited[cur->right]){
                q.push(cur->right);
                visited[cur->right]=true;
            }
            if(parents[cur] && !visited[parents[cur]]){
                q.push(parents[cur]);
                visited[parents[cur]]=true;
            }
        }
        }
        vector<int> result;
        while(!q.empty()){
            TreeNode *cur=q.front();
            q.pop();
            result.push_back(cur->val);
        }
        return result;
        
        
    }

};