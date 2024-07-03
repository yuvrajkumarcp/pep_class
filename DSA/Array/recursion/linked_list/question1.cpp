#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
void printList(Node* node) {
  while (node != nullptr) {
    std::cout << node->data << " ";
    node = node->next;
  }
  std::cout << std::endl;
}
Node* findMiddle(Node* head) {
  if (head == NULL) return NULL;
  Node* slow = head;
  Node* fast = head;
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

// int countNodes(Node* head) {
//     int count = 0;
//     Node* current = head;
//     while (current != NULL) {
//         count++;
//         current = current->next;
//     }
//     return count;
// }

int main() {
  
    Node* head = new Node{1, NULL};
    head->next = new Node{2, NULL};
    head->next->next = new Node{3, NULL};


   

    return 0;
}
