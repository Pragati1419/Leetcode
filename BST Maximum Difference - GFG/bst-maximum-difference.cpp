//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
vector<long long int> ans;
    void inorder(Node *temp2, long long int sum)
    {
        if(temp2==NULL)
        {
            return;
        }
        
        if(temp2->left==NULL && temp2->right==NULL)
        {
            sum = sum+ temp2->data;
            ans.push_back(sum);
        }
        sum = sum + temp2->data;
        inorder(temp2->left,sum);
        inorder(temp2->right,sum);
        
    }
    int maxDifferenceBST(Node *root,int target){
        // Code here
        struct Node *temp = root;
        int flag = 0;
        long long int sum1 = 0;
        while(temp!=NULL)
        {
            if(temp->data == target)
            {
                flag = 1;
                break;
            }
            else if(temp->data < target)
            {
                sum1 = sum1 + temp->data;
                temp = temp->right;
            }
            else
            {
                sum1 = sum1 + temp->data;
                temp = temp->left;
            }
        }
        if(flag==0)
        {
            return -1;
        }
        else{
            long long int sum2 = 0;
            inorder(temp,sum2);
            int size = ans.size();
            
            int maxi = sum1 - ans[0]+target;
            for(int k = 1; k < size; k++)
            {
                if(maxi < sum1 - ans[k] +target)
                {
                    maxi = sum1- ans[k] + target;
                }
            }
            return maxi;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends