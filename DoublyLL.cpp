#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1, Node* next1, Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int val){
        data=val;
        next=NULL;
        back=NULL;
    }
};   
Node * convertArrayToDLL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        if(head==NULL){
            head=temp;
            prev=temp;
        }
        else{
            prev->next=temp;
            temp->back=prev;
            prev=temp;
        }
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
Node* deletehead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp=head;
    head = head->next;
    head->back = NULL;
    temp->next=NULL;
    delete temp;
    return head;
}
Node* deletetail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail=head;
    Node* prev=NULL;
    while(tail->next!=NULL){
       tail=tail->next;
    }
    Node* newTail = tail->back;
    newTail ->next=NULL;
    tail->back=NULL;
    delete tail;
    
    return head;

}
Node* deleteAtPosition(Node* head,int pos){
    if(pos==1){
        return deletehead(head);
    }
    Node* temp=head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    Node* todelete = temp->next;
    temp->next=todelete->next;
    if(todelete->next!=NULL){
        todelete->next->back=temp;
    }
    todelete->next=NULL;
    todelete->back=NULL;
    delete todelete;
    return head;
}
Node* deleteNode(Node* head, int val){
    if(head==NULL){
        return NULL;
    }
    if(head->data==val){
        return deletehead(head);
    }
    Node* temp=head;
    while(temp!=NULL && temp->data!=val){
        temp=temp->next;
    }
    if(temp==NULL){
        return head;
    }
    Node* prev = temp->back;
    prev->next = temp->next;
    if(temp->next!=NULL){
        temp->next->back=prev;
    }
    temp->next=NULL;
    temp->back=NULL;
    delete temp;
    return head;



}


int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=convertArrayToDLL(arr);
    print(head);
    cout<<endl;
    head = deletehead(head);
    
    print(head);
    cout<<endl;
    head = deletetail(head);
    print(head);
    cout<<endl;
    head = deleteAtPosition(head,2);
    print(head);
    cout<<endl;
    head = deleteNode(head,4);
    print(head);
    return 0;
}   
