#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtTail(Node* &head,int val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(Node* &head,int val){
    Node* n = new Node(val);
    n->next=head;
    head=n;
}


void insertAtPosition(Node* &head,int pos,int val){
    if(pos==1){
        insertAtHead(head,val);
        return;
    }
    Node* n = new Node(val);
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
}


void deleteAtHead(Node* &head){
    Node* temp=head;
    head=head->next;
    delete temp;
}


void deleteAtPosition(Node* &head,int pos){
    if(pos==1){
        deleteAtHead(head);
        return;
    }
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}


int main(){
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    cout<<endl;
    insertAtPosition(head,3,10);
    display(head);
    cout<<endl;
    deleteAtPosition(head,3);
    display(head);

    return 0;
}
