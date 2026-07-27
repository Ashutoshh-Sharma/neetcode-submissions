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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        ListNode* head;
        ListNode* ptr;
        ListNode* first = list1;
        ListNode* second = list2;

        if (first->val <= second->val) {
            ptr = head = list1;
            first = first->next;
        } else {
            ptr = head = list2;
            second = second->next;
        }

        while (first != NULL && second != NULL) {
            if (first->val <= second->val) {
                ptr->next = first;
                first = first->next;
            } else {
                ptr->next = second;
                second = second->next;
            }
            ptr = ptr->next;
        }
        if (first != NULL)
            ptr->next = first;
        else
            ptr->next = second;
        return head;
    }
};
