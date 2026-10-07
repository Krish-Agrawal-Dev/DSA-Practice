class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == nullptr || k == 1)
            return head;

        ListNode dummy;
        dummy.next = head;

        ListNode* previousGroupTail = &dummy;

        while (true) {

            ListNode* kthNode = previousGroupTail;

            for (int i = 0; i < k; i++) {

                kthNode = kthNode->next;

                if (kthNode == nullptr)
                    return dummy.next;
            }

            ListNode* nextGroupHead = kthNode->next;

            ListNode* previousNode = nextGroupHead;
            ListNode* currentNode = previousGroupTail->next;

            while (currentNode != nextGroupHead) {

                ListNode* nextNode = currentNode->next;

                currentNode->next = previousNode;

                previousNode = currentNode;
                currentNode = nextNode;
            }

            ListNode* oldGroupHead = previousGroupTail->next;
            previousGroupTail->next = kthNode;
            previousGroupTail = oldGroupHead;
        }

        return dummy.next;
    }
};
