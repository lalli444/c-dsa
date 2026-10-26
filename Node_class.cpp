#include<iostream>
using namespace std;

class Node{
    public:
     
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }

};

int size(Node*root){
   if(root==NULL) return INT32_MIN;
   return 1+size(root->left) + size(root->right); 
     
       
}

int sum(Node*root){
    if( root ==NULL) return 0;
    return root->val+sum(root->left) + sum(root->right);
}

int mxx(Node*root){
    if(root==NULL) return 0;
    return max(root->val,max(mxx(root->right),mxx(root->left)));
}

int levels(Node*root){
    if(root==NULL) return 0;
    return 1+max(levels(root->left),levels(root->right));
}

int pro(Node*root){
    if(root==NULL) return 1;
    return root->val*pro(root->left)*pro(root->right);
}

int mini(Node*root){
    if(root==NULL) return INT16_MAX;
    return min(root->val,min(mini(root->left),mini(root->right)));

}

void display(Node*root){
    if(root==NULL) return ;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    Node*a=new Node(1);
     Node*b=new Node(2);
      Node*c=new Node(3);
       Node*d=new Node(4);
        Node*e=new Node(5);
         Node*f=new Node(6);
          Node*g=new Node(7);
          Node*h=new Node(8);
          Node*i=new Node(9);

// now important work

     a->left=b;
     a->right=c;
     b->left=d;
    b->right=e;
     c->left=f;
     c->right=g;
     display(a);
     cout<<endl;
     cout<<sum(a);
     cout<<endl;
     cout<<size(a);
     cout<<endl;
     cout<<mxx(a);
     cout<<endl;
     cout<<levels(a);
     cout<<endl;

     cout<<pro(a)<<endl;

     cout<<mini(a)<<endl;

}