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
    ListNode* partition(ListNode* head, int x) {
        ListNode *s=new ListNode(0);
        ListNode *h=new ListNode(0);
        ListNode *sh=s ,*hh=h;
        while(head!=NULL){
            if(head->val<x)
            {
                 sh->next=head;
            sh=sh->next;
            }
            else{
                hh->next=head;
                hh=hh->next;
            }
            head=head->next;
        }
        hh->next=NULL;
        sh->next=h->next;
        return s->next;
    }
};