
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
    
};


void reverse(Node* &head){
    Node* prev = NULL;
    Node* current = head;
    Node* next;
    while (current!= NULL){
        next = current->next ;    // Store next node
        current->next = prev  ;   // Reverse current node's pointer
        prev = current         ; // Move prev to current node
        current = next     ;// Move to next node
    }
         head = prev;    // Update head to new head of the reversed list
        
    }

// void deleteAtHead(Node* head){
//     Node* temp = head;

//     while(temp->next->)
// }

// bool search(Node* head, int key){
//     Node* temp=head;

//     while(temp!=NULL){
//         if(temp->data == key) return true;
//         temp = temp->next;
//     }    
//     return false;
// }

// void deletion( Node* &head, int val){
//     Node* temp=head;

//     while (temp->next->data != val){
//         temp = temp->next;
//     }

//     Node* toDelete = temp->next;
//     temp->next = temp->next->next;
//     delete toDelete;
// }

void InsertionAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head=n;


}

void InsertAtTail(Node* &head, int val) {
    Node* n = new Node(val);

    if (head == NULL) {
        head = n;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    InsertAtTail(head, 1);
    InsertAtTail(head, 2);
    InsertAtTail(head, 3);
    InsertionAtHead(head, 20);
    // int valToDelete = 3;
    // deletion(head, valToDelete);

   
    // display(head);



    // display(head); 
    reverse(head);
    display(head);



    return 0;
}
