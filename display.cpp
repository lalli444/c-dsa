#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>& q){
    int n=q.size();
    int a=0;
    for(int i=0; i<n; i++){
        int x=q.front();
        cout<<x<<" "<<endl;
        q.pop();
        q.push(x);
        a++;
    }
}
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
   display(q);


}