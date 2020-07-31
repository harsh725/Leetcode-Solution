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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode ans(INT_MIN);
        ListNode *l3 = &ans;
        while (l1 and l2)
        {
            int a, b;
            if (l1 == NULL) a = INT_MAX;
            else a = l1->val;
            if (l2 == NULL)b = INT_MAX;
            else b = l2->val;
            // struct ListNode temp=NULL;
            if (a <= b )
            {
                ListNode * temp = new ListNode(a);
                // temp->val=a;
                // temp->next=NULL;
                l3->next = temp;
                l3 = l3->next;
                l1 = l1->next;
            }
            else
            {
                ListNode * temp = new ListNode(b);
                // temp->val=b;
                // temp->next=NULL;
                l3->next = temp;
                l3 = l3->next;
                l2 = l2->next;

            }

        }
        if (l1 == nullptr)
            l3->next = l2;
        if (l2 == nullptr)
            l3->next = l1;
        return ans.next;
    }
};