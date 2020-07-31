/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    Solution()
    {
        std::ios::sync_with_stdio(false);
        cin.tie(NULL);
    }
    bool hasCycle(ListNode *head) {
        // cout<<head->val;
        ListNode * slow = head, *fast = head;
        if (head == NULL or head->next == NULL or head->next->next == NULL)
            return false;

        // if(head->next==head)
        //     return true;
        if (head->next == head)
            return true;

        cout << "j";
        while (fast != NULL and fast->next != NULL)
        {

            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
                return true;
        }
        cout << "jjjj";
        return false;
    }
};