#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == nullptr) {
        head = n;
        n->next = head;
        n->prev = head;
    } else {
        Node* tail = head->prev;
        n->next = head;
        n->prev = tail;
        tail->next = n;
        head->prev = n;
        head = n;
    }
}



int main(){
    insertAtHead(head, 10);   

}