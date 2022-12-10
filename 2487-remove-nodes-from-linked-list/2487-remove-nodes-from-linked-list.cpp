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
       ListNode* reverse(ListNode* temp)
    {
         ListNode *prev=NULL,*nxt=temp;
         while(temp)
          {
            nxt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=nxt;
          }
        
        return prev;
    }
    
    ListNode* removeNodes(ListNode* head) 
    {
        ListNode* temp=head;
        ListNode* node = new ListNode(0);
        ListNode* ans=node;
        
        temp=reverse(temp);
        int mx=temp->val;
        while(temp)
        {
           mx=max(mx,temp->val);
            
            if(temp->val>=mx)
            {
               ListNode* n=new ListNode(temp->val);
               node->next=n;
                node=node->next;
            }
            temp=temp->next;
        }

       temp=reverse(ans->next);
        return temp;
    }

};