/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* itr = head;
        
        while(itr != NULL)
        {
            Node* node = new Node(itr->val);
            node->next = itr->next;
            itr->next = node;
            itr = itr->next->next;
        }
        
        itr = head;
        while(itr != NULL) {
            if(itr->random != NULL)
                itr->next->random = itr->random->next;
            itr = itr->next->next;
        }
        
        Node* dummynode = new Node(0);
        Node* itr2 = dummynode;
        itr = head;
        while(itr != NULL) {
            itr2->next = itr->next;
            itr->next = itr2->next->next;
            itr = itr->next;
            itr2 = itr2->next;
        }
        return dummynode->next;
    }

    
};