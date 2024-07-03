#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};


Node* reverse(Node* head, int k) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    int count = 0;

    // Reverse first k nodes of the linked list
    while (current != nullptr && count < k) {
        next = current->next;   // Store next node
        current->next = prev;   // Reverse current node's pointer
        prev = current;         // Move prev to current node
        current = next;         // Move to next node
        count++;
    }

        if (next != nullptr) {
        head->next = reverse(next, k);  // head is the last node in reversed list, so link it to the next section
    }

    return prev;
}

void dispaly(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {
    // Creating a linked list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    head->next->next->next->next->next = new Node(6);
    head->next->next->next->next->next->next = new Node(7);
    head->next->next->next->next->next->next->next = new Node(8);

    int k = 3;

    cout << "Original Linked List: ";
    dispaly(head);

    head = reverse(head, k);

    cout << "Reversed Linked List in groups of " << k << ": ";
    dispaly(head);

    return 0;
}

