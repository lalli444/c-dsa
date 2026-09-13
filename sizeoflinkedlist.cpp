#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;  // null address in very member a,b,c,d 
    }
}; // dont forget ; after every class;

// printing form void function;
void display(Node* head){ // temp is here is address
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

}
void displayrec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    displayrec(head->next);
}

int size(Node*head){
    Node* temp=head;
    int n=0;
    while(temp!=NULL){ // since temp is address therefore we are comparing(not) with null beacuse null is a type of empty address which is stroe in node a( value, adrres of next node);
        n++;
        temp=temp->next;
    }
    return n;
}


int main(){
       
    Node* a=new Node(10);
     Node* b=new Node(20);
      Node* c=new Node(30);
       Node* d=new Node(40);

       a->next=b;
       b->next=c;
       c->next=d;
       
     //  Node*temp=a;
      // while(temp!=NULL){
       // cout<<temp->val<<" ";
      //  temp=temp->next;

        displayrec(a);
        cout<<endl;
        cout<<size(a); 
       }
