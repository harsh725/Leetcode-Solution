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
	int numComponents(ListNode* head, vector<int>& G) {
		unordered_map<int, bool> m;

		if (head == NULL)return 0;
		int c = 0;
		for (int i : G)
			m[i] = true;
		int d = 0;
		while (head)
		{
			if (m[head->val])
			{
				m[head->val] = false;
				d++;
			}
			else if (d != 0)
			{
				c++;
				d = 0;
			}
			head = head->next;
		}
		if (d != 0)
			c++;

		return c;
	}
};