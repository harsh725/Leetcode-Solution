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
	Solution()
	{
		ios::sync_with_stdio(false); cin.tie(NULL);
	}

	ListNode* removeElements(ListNode* head, int val) {

		if (head == NULL)return head;

		while (head and head->val == val)
			head = head->next;
		if (head == NULL)return head;

		ListNode * temp = head;
		if (temp->val == val and temp)
		{
			head = head->next;
			temp = temp->next;
		}
		int x = 0;
		if (temp == NULL)return head;
		while (temp->next != NULL )
		{
			cout << x++;
			if (temp->next->val == val)
				temp->next = temp->next->next;
			else
				temp = temp->next;
			if (temp == NULL)
				break;
			// cout<<temp->val<<" ";
		}
		return head;

	}
};