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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_map<ListNode*, int> m;

        if (headA == NULL or headB == NULL)return NULL;

        while (headA)
        {
            m[headA] = 1;
            headA = headA->next;
        }

        while (headB)
        {
            if (m[headB] == 1)
            {
                return headB;
            }
            headB = headB->next;
        }
        return NULL;
    }
};