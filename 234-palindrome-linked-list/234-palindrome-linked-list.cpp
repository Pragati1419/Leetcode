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
    bool isPalindrome(ListNode* head) {

        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL and fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            }
        ListNode* curr=slow->next;
        ListNode* prev=NULL;
        ListNode* temp;
        
        while(curr!=NULL){
            temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            }
        slow=prev;
        
        while(slow!=NULL){
            if(slow->val!=head->val){
                return false;
            }
            slow=slow->next;
            head=head->next;
            }
        
        return true;

    }
};