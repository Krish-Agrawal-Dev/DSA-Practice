class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {

        ListNode oddDummy;
        ListNode* oddTail = &oddDummy;

        ListNode evenDummy;
        ListNode* evenTail = &evenDummy;

        int count = 1;

        while (head != nullptr) {

            if (count % 2 != 0) {

                oddTail->next = head;
                oddTail = oddTail->next;
            }

            else {

                evenTail->next = head;
                evenTail = evenTail->next;
            }

            count++;
            head = head->next;
        }

        evenTail->next = nullptr;

        oddTail->next = evenDummy.next;
        head = oddDummy.next;
        return head;
    }
};