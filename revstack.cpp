#include<iostream>
#include<stack>
using namespace std;
void display(stack<int>& print){
    if(print.size()==0) return;
    
    int x=print.top();
    print.pop();
     display(print);
    
    cout<<x<<" ";
   
    print.push(x);
}
void pushAtbottom(stack<int>& st,int val){
    if(st.size()==0){
        st.push(val);
        return;
    }
    int x=st.top();
    st.pop();
    pushAtbottom(st,val);
    st.push(x);
}
void reverse(stack<int> & st){
    if(st.size()==1) return;
    int x=st.top();
    st.pop();
    reverse(st);
    pushAtbottom(st,x);

}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
   // pushAtbottom(st,-10);

    display(st);
    cout<<endl;
    reverse(st);
    display(st);
    

   
   
    
    }
