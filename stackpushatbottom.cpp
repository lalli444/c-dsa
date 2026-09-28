#include<iostream>
#include<stack>
using namespace std;
void print(stack<int> st){
     stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(34);
    st.push(2454);
    st.push(32544356);
    int x=13;

    stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();

    }
    st.push(x);

    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();

    }
        print(st);
   
    
    }
