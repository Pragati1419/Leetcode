/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> preorder(Node* root) {
                if(root==NULL)
                    return{};
        stack<Node*> s;
        vector<int> v;
        s.push(root);
        
        while(!s.empty()){
            Node* node = s.top();
            s.pop();
            v.push_back(node->val);
            for(int i=(node->children).size()-1;i>=0;--i){
                s.push(node->children[i]);
            }
        }
        return v;

    }
};