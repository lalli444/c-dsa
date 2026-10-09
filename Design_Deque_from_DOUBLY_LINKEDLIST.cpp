#include<iostream>
using namespace std;
class Node{ // user defined data type
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){               // this is a constructor
        this->val=val;
        this->next=NULL; 
        this->prev=NULL;
    }

}; 

class Deque{ // user defined data structure
    public:
    Node*head;
    Node*tail;
    int size;
    Deque(){
        head=tail=NULL;
        size=0;
    }

void pushback(int val){
    Node*temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        tail->next=temp;
        temp->prev=tail;   // this is new line add in DLL 
        tail=temp;
    }
    size++;
}    
void pushfront(int val){
    Node*temp=new Node(val);
    if(size==0) head=tail=temp;
    else{
        temp->next=head;
        head->prev=temp; // this is new line ok;
        head=temp;

    }
    size++;
}    
 


void popfront(){
    if(size==0){
        cout<<" list is empty!";
        return ;
    }
    head=head->next;
   if(head!=NULL) head->prev=NULL;
   if(head==NULL) tail=NULL;
    size--;
}
void popback(){
    if(size==0){
        cout<<"list is empty";
        return ;
    }
    else if(size==1){
        popfront();
        return;
    }
   Node*temp=tail->prev;
   temp->next=NULL;
   tail=temp;
    size--;
}


int front(){
     if(size==0){
        cout<<" queue is empty!";
        return -1;
    }
    return head->val;

}
int back(){
     if(size==0){
        cout<<" queue is empty!";
        return -1;
    }
    return tail->val;

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
   Deque dq;
   dq.pushback(10);
   dq.pushback(1052);
   dq.pushback(10257);
   dq.pushback(10742);
   dq.pushback(107);
   dq.pushback(107427);
   dq.display();
}