// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


Node *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node *root = new Node(stoi(ip[0]));

    // Push the root to the queue
    queue<Node *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new Node(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
   Node *parentMapping(Node *root, int target, map<Node*, Node*>&mp){
       
       Node *res=NULL;
       
       queue<Node*>q;
       q.push(root);
       mp[root]=NULL;
       
       while(!q.empty()){
           Node *f=q.front();
           q.pop();
           
           if(f->data==target) res=f;
           
           if(f->left){
               mp[f->left]=f;
               q.push(f->left);
           } 
           
           if(f->right){
               mp[f->right]=f;              
               q.push(f->right);
           } 
       }
       return res;
   }
 
   void burnTree(Node *targetNode, map<Node*,Node*>&mp, int &t){
       
       map<Node*, bool> vis;
       queue<Node*>q;
       q.push(targetNode);
       vis[targetNode]=true;
       
       while(!q.empty()){
           
           int n=q.size();
           bool flag=0;
           
           for(int i=0;i<n;i++){
               
               Node *curr=q.front();
               q.pop();
               
               if(curr->left && !vis[curr->left]){
                   q.push(curr->left);
                   vis[curr->left]=true;
                   flag=1;
               }
               
               if(curr->right && !vis[curr->right]){
                   q.push(curr->right);
                   vis[curr->right]=true;
                   flag=1;
               }
               
               if(mp[curr]!=NULL && !vis[mp[curr]]){
                   q.push(mp[curr]);
                   vis[mp[curr]]=true;
                   flag=1;
               }
           }
           
           if(flag==true) t++;
       }
   }
 
   int minTime(Node* root, int target) 
   {
       // Your code goes here
       int t=0;
       
       map<Node*, Node*> mp;
       
       Node* targetNode=parentMapping(root,target,mp);
       
       burnTree(targetNode, mp, t);
       
       return t;
       
   }


};

// { Driver Code Starts.

int main() 
{
    int tc;
    scanf("%d ", &tc);
    while (tc--) 
    {    
        string treeString;
        getline(cin, treeString);
        // cout<<treeString<<"\n";
        int target;
        cin>>target;
        // cout<<target<<"\n";

        Node *root = buildTree(treeString);
        Solution obj;
        cout<<obj.minTime(root, target)<<"\n"; 

        cin.ignore();

    }


    return 0;
}
  // } Driver Code Ends