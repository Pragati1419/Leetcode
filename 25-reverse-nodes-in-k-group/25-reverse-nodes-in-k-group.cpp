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
    ListNode* reverseKGroup(ListNode* head, int k) {
     /* if(head==NULL)
        return NULL;
        
        ListNode* next=NULL;
         ListNode* curr=head;
         ListNode* prev=NULL;
        
        int count=0;
        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            count++;
        }
        
        if(next!=NULL){
            head->next=reverseKGroup(next,k);
        }
        return prev;
      */
        if(head==NULL)
            return NULL;
        ListNode *KSizeChecker = head;
        for(int i=0;i<k;i++)
        {
            if(KSizeChecker==NULL)
                return head;
            KSizeChecker = KSizeChecker->next;
        }
        int count=0;
        ListNode *cur=head,*prev=NULL,*next=NULL;
        while(cur and count<k)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            count++;
        }
        if(next)
            head->next=reverseKGroup(next,k);
        return prev;
    }
};