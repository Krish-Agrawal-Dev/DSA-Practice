/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        if (head == nullptr)
            return nullptr;

        Node* current = head;

        unordered_map<Node*, Node*> um;

        while (current != nullptr) {

            um[current] = new Node(current->val);
            current = current->next;
        }

        current = head;
        while (current != nullptr) {

            um[current]->next = um[current->next];
            um[current]->random = um[current->random];
            current = current->next;
        }

        return um[head];
    }
};