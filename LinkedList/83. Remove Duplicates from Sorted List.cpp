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
        std::ios::sync_with_stdio(false); std::cin.tie(NULL); std::cout.tie(0);
    }
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode *temp = head;

        if (head == NULL)return NULL;

        while (head->next != NULL)
        {

            if (head->next->val == head->val)
                *head = *(head->next);
            else
                head = head->next;

        }

        return temp;
    }

};