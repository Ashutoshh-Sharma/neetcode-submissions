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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;
        ListNode* i = l1;
        ListNode* j = l2;
        int carry = 0;

        while (i || j || carry) {
            int x = (i) ? i->val : 0;
            int y = (j) ? j->val : 0;

            int sum = x + y + carry;

            int digit = sum % 10;
            carry = sum / 10;

            curr->next = new ListNode(digit);
            curr = curr->next;

            if (i) i = i->next;
            if (j) j = j->next;
        }
        return dummy.next;
    }
};
