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
int main(){
 // initialization of values 10 20 30 ....
  //  Node a;
  //  a.val=10;
  //  Node b;
   // b.val=20;
   // Node c;
   // c.val=30;
   // Node d;
   // d.val=40;
   Node a(10);
   Node b(20);
   Node c(30);
   Node d(40);

    // formation of linked list;

    a.next=&b;
    b.next=&c;
    c.next=&d;
    
    // printing of linkedlist

    Node temp=a;
    while(true){
        cout<<temp.val<<endl;
        if(temp.next==NULL) break;
        temp=*(temp.next);
        
    }

}