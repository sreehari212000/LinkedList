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
void insert(Node* &head, int data){
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void deleteAtN(Node* &head, int n){
    Node* current = head;
    if(n == 1){
        head = current->next;
        delete(current);
        return;
    }
    for(int i=0; i<n-2; i++){
        current = current->next;
    }
    Node* toDelete = current->next;
    current->next = toDelete->next;
    delete(toDelete);
}
void display(Node* head){
    Node* current = head;
    while(current != NULL){
        cout<<current->data<<"->";
        current = current->next;
    }
    cout<<endl;
}
void remove(Node* &head, int data){
    Node* current = head;
    while(data != current->next->data){
        current = current->next;
    }
    Node* toDel = current->next;
    current->next = toDel->next;
    delete toDel;
}
int main(){
    Node* head = NULL;
    insert(head, 5);
    insert(head, 4);
    insert(head, 3);
    insert(head, 2);
    insert(head, 1);
    cout<<"Before deletion : ";
    display(head);
    deleteAtN(head, 5);
    cout<<"After deletion : ";
    display(head);
}