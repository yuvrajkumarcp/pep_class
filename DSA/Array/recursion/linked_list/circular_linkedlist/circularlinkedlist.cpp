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
  



void insertAtHead(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
        n->next = head;
    } else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
        head = n;
    }
}


void insertAtEnd(Node*& head, int val) {
    Node* n = new Node(val);
    if (head == NULL) {
        head = n;
        n->next = head;
    }
     else {
        Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = n;
        n->next = head;
    }
}

void deleteHead(Node*& head) {
   Node* temp=head;

   while (temp->next != head){
    temp=temp->next;
   }

   Node* toDelete = head;
   temp->next = head->next->next;
   head=head->next;
   delete toDelete;
}

bool isCircular(Node* head){
    if(head==NULL) return true;

    Node* temp = head;
    while(temp!=NULL && temp !=head){
        temp = temp->next;
    }
    if (temp==head){
        return true;
    }
    return false; 
}


void display(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}





int main() {
    Node* head = nullptr;

    insertAtHead(head, 10);
    insertAtHead(head, 20);
    insertAtHead(head, 30);
    insertAtHead(head, 40);


    display(head);

     insertAtEnd(head, 50);
      insertAtEnd(head, 60);
      insertAtEnd(head, 70);
     display(head);


    deleteHead(head);
    display(head);
    

    return 0;
}

