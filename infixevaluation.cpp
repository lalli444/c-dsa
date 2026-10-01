#include<iostream>
#include<stack>
using namespace std;
  int prio(char ch){
    if(ch=='+' or ch=='-') return 1;
    else return 2;
  }
  int solve(int val1,int val2,int ch){
    if(ch=='+') return val1+val2;
    else if(ch=='-') return val1-val2;
    else if(ch=='*') return val1*val2;
    else return val1/val2;
  }
int main(){
    string s="2+6*4/8-3"; // infix expression
    // we need to stacks,1 for value and 2 for operator
    stack<int> val;
    stack<char> op;
    for(int i=0; i<s.length(); i++){
       // cheak if s[i] a digit (0-9)
       if(s[i]>=48 and s[i]<=57){ //digit
         val.push(s[i]-48);
        }
        else{ //s[i] it is -> *,/,+,-
            if(op.size()==0 or prio(s[i])> prio(op.top())) op.push(s[i]);
            else{ // proprity(s[i]<=priority(op.top()))
                while(op.size()>0 and prio(s[i])<=prio(op.top())){
                    // i have to do (val1 op val2)
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
                    val.push(ans);
                }
                op.push(s[i]); // very important 

            }

        }
    }
    // the operator stack can have values
    // so make it empty
    while(op.size()>0){
        // work
        char ch=op.top();
        op.pop();
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);
        val.push(ans);
    }
    cout<<val.top()<<endl;
    cout<<2+6*4/8-3;

}