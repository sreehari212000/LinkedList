#include "bits/stdc++.h"
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};
void insertAtHead(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void insertAtEnd(Node* &head, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* current = head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}
void display(Node* head){
    Node* current = head;
    while (current != NULL)
    {
        cout<<current->data<<"->";
        current = current->next;
    }
    cout<<endl;
    
}
Node* reverseList(Node* &head){
    if(head == NULL){
        return head;
    }
    Node* current = head;
    Node* next;
    Node* prev = NULL;
    while (current != NULL)
    {
//setting a ref to next node so that we dont loose track as we set links of current node
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
    
}
int main(){
    Node* head = NULL;
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    insertAtEnd(head, 4);
    Node* revHead = reverseList(head);
    display(revHead);
}