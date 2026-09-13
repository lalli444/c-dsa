#include<iostream>
using namespace std;
class Node{ // user defined data type
    public:
    int val;
    Node*next;
    Node(int val){               // this is a constructor
        this->val=val;
        this->next=NULL; 
    }

};

class Linkedlist{ // user defined data structure
    public:
    Node*head;
    Node*tail;
    int size;
    Linkedlist(){
        head=tail=NULL;
        size=0;
    }

void insertAtEnd(int val){
    Node*temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    size++;
}    
void insertAtHead(int val){
    Node*temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        temp->next=head;
        head=temp;

    }
    size++;
}    

void insertAtIdx(int idx,int val){
    if(idx<0 or idx>size) cout<<"Invalid index"<<endl;
    else if( idx==0) insertAtHead(val);
    else if(idx==size) insertAtEnd(val);
    else{
        Node* t=new Node(val);
        Node*temp=head;
        for(int i=1; i<=idx-1; i++){  //keep remember this  condition from i=1;
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        size++;
    }
}
int getAtIdx(int idx){
    if(idx<0 or idx>=size){
        cout<<"Invalid index";
        return -1;

    }
    else if(idx==0) return head->val;
    else if(idx==size-1) return tail->val;
    else{
        Node*temp=head;
        for(int i=1; i<=idx; i++){
            temp=temp->next;
        }
        return temp->val;
    }
}
void deletAtHead(){
    if(size==0){
        cout<<" list is empty!";
        return ;
    }
    head=head->next;
    size--;
}
void deletAttail(){
    if(size==0){
        cout<<"list is empty";
        return ;
    }
    Node*temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    size--;
}

void deleteAtidx(int idx){
    if(size==0){
        cout<<" list is empty";
        return ;
    }
    else if(idx<0 or idx>=size){
        cout<<" invalid index";
        return;
    }
    else if(idx==0) return deletAtHead();
    else if(idx== size-1) return deletAttail();
    else {
        Node*temp=head;
        for(int i=0; i<=idx-1; i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        size--;
    }
}

void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

};

int main(){
    Linkedlist ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.display();
    ll.insertAtHead(3);
    ll.display();
    ll.insertAtEnd(4444);
    ll.display();
    ll.insertAtIdx(1,66);
    ll.display();
    
}