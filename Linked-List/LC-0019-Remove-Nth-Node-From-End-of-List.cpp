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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head == nullptr || head->next == nullptr)
            return nullptr;

        ListNode* dummy = new ListNode();
        dummy->next = head;

        int count = 1;
        ListNode* fast = head;

        while (count != n) {

            fast = fast->next;
            count++;
        }

        ListNode* slow = dummy;

        while (fast->next != nullptr) {

            slow = slow->next;
            fast = fast->next;
        }

        ListNode* temp = slow->next;
        slow->next = temp->next;

        delete temp;

        head = dummy->next;
        delete dummy;

        return head;
    }
};