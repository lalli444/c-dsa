#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int>& q){
    int n=q.size();
    stack<int> st;


   
    for(int i=0; i<n; i++){
        int x=q.front();
        st.push(x);
        q.pop();
        q.push(x);
        
    }

    cout<<endl;
    cout<<st.size()<<endl;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<st.top();
        cout<<endl;
        st.pop();
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
   reverse(q);


}