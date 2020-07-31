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
		ListNode *temp = head;
		if (temp == NULL)return temp;
		ListNode *pre = NULL, *cur = head;
		temp = temp->next;
		while (temp)
		{
			cur->next = pre;
			pre = cur;
			cur = temp;
			// cout<<cur->val;
			temp = temp->next;

		}
		cur->next = pre;
		return cur;
	}
};