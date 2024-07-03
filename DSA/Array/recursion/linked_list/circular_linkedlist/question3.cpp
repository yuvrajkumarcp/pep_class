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

Node* detectLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;           
        fast = fast->next->next;    

        
        if (slow == fast) {
            return slow;
        }
    }
    
    return fast;
}
Node* getStartingNode(Node* head) {
       if (head == NULL) 
        return NULL; 
    
    Node* intersection = detectLoop(head);

     Node* slow2 = head;

     while (slow2 != intersection) {
        slow2 = slow2->next;
        intersection = intersection->next;
     }
    return slow2; 
}


void removeLoop(Node* head) {
    if (head == NULL)
        return; 

    Node* startOfLoop = getStartingNode(head);

    if (startOfLoop == NULL)
        return; 


    
    Node* temp = startOfLoop;

    while (temp->next != startOfLoop) {
        temp = temp->next;
    }

    temp->next=NULL;

}




