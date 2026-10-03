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

        ListNode* dummy = new ListNode();
        ListNode* tail = dummy;

        ListNode* c1 = list1;
        ListNode* c2 = list2;

        while (c1 != nullptr && c2 != nullptr) {

            if (c1->val > c2->val) {

                tail->next = c2;
                tail = tail->next;

                c2 = c2->next;
            }

            else {

                tail->next = c1;
                tail = tail->next;

                c1 = c1->next;
            }
        }

        while (c1 != nullptr) {

            tail->next = c1;
            tail = tail->next;

            c1 = c1->next;
        }

        while (c2 != nullptr) {

            tail->next = c2;
            tail = tail->next;

            c2 = c2->next;
        }

        ListNode* head = dummy->next;

        delete dummy;

        return head;
    }
};