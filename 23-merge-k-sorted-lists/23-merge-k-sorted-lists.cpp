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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
              if(lists.size()==0)
            return NULL;
        vector<int> val;
        for(auto list:lists){
            while(list){
                val.push_back(list->val);
                list=list->next;
            }
        }
        sort(val.begin(),val.end());
        ListNode* head= new ListNode(0);
        ListNode* node=head;
        for(auto i:val){
            head->next= new ListNode(i);
            head=head->next;
        }
        return node->next;
  
    }
};