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
    ListNode* reverseList(ListNode* head) {
        	ListNode* reverseHead = NULL;
	while (head) {
		ListNode* tmp = head->next;
		head->next = reverseHead;
		reverseHead = head;
		head = tmp;
	}
	return reverseHead;
    }
};