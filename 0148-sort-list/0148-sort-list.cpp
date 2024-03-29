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
     ListNode* mergeList(ListNode* l1, ListNode* l2)
    {
        ListNode dummy(0);
        ListNode* cur = &dummy;
        
        while (l1 != NULL && l2 != NULL)
        {
            if (l1->val < l2->val)
            {
                cur->next = l1;
                l1 = l1->next;
            }
            else
            {
                cur->next = l2;
                l2 = l2->next;
            }
                
            cur = cur->next;
        }
        
        if (l1 != NULL)
            cur->next = l1;
        else
            cur->next = l2;
            
        return dummy.next;
    }
    ListNode* sortList(ListNode* head) {
      if(head==NULL || head->next==NULL)
          return head;
        
        ListNode *temp=head;
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(fast && fast->next){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
            
        }
        temp->next=NULL;
        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(slow);
        return mergeList(l1,l2);
    }
};