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
    
     ListNode* swapAdjacentNodes(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
         ListNode *first=head;
         ListNode *second=head->next;
         ListNode *tempList = swapAdjacentNodes(second->next);
         first->next=tempList;
         second->next=first;
         return second;
    }
    
    ListNode* swapPairs(ListNode* head) {
        return swapAdjacentNodes(head);
    }
};