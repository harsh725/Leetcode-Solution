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
	bool isPalindrome(ListNode* head) {

		if (head == NULL)return true;

		ListNode * temp = head;
		int x = 0;
		vector<int> a;
		while (temp != NULL)
		{
			a.emplace_back(temp->val);
			temp = temp->next;
		}
		int n = a.size();
		for (int i = 0, j = n - 1; i < n / 2; i++)
		{
			if (a[i] != a[j--])
				return false;
		}
		return true;
	}
};