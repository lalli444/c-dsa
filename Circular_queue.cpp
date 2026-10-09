#include<iostream>
#include<vector>
using namespace std;
class Queue{
    public:
    int f;
    int b;
    int s;
    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        s=0;
        vector<int> v(val);
        arr=v;

    }

void push(int val){
    if(b==arr.size()){
        cout<<"queue is Full!"<<endl;
        return ;
    }
    arr[b]=val;
    b++;
    s++;
}    

void pop(){
    if(f-b==0){
        cout<<"queue is empty"<<endl;
        return;
    }
    f++;
    s--;
}
int front(){
    if(s==0){
        cout<<"queue is empty "<<endl;
        return -1;
    }
    return arr[f];
}
int back(){
    if(s==0){
        cout<<"  queue is empty! "<<endl;
        return -1;
    }
    return arr[b-1];

}
int size(){
    return b-f;
}
void display(){
    for(int i=f; i<b; i++){
        cout<<arr[i]<<endl;

    }
    cout<<endl;
}
int size(){
    return s; 
}
};
int main(){
    Queue q(5);
    
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
     q.display();

}