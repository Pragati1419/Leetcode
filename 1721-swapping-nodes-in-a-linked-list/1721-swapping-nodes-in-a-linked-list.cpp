/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode *fast =head, *slow =head ,*temp = head;
        for(int i=0;i<k-1;i++){
            fast=fast->next;
            temp=fast;
        }
            while(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
        int temp_val=temp->val;
            temp->val=slow->val;
            slow->val=temp_val;
        
        return head;
    }
};