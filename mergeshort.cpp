#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> & u, vector<int> & v,vector<int> & finalans){
    int i=0;
    int j=0;
    int k=0;
    while(i<u.size() && j<v.size()){
        if(u[i] < v[j]){
            finalans[k] = u[i];
            k++;
            i++;

        }
        else {
            finalans[k] = v[j];
            k++;
            j++;
        }

    }

    if(i==u.size()){
        while(j<v.size()){
            finalans[k]=v[j];
            k++;
            j++;
        }
    }



     if(j==v.size()){
        while(i<u.size()){
            finalans[k]=u[i];
            k++;
            i++;
        }
    }
}
void mergesort(vector<int> & finalans){
    int n=finalans.size();
    if(n==1) return;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> a(n1);
    for(int i=0; i<n1 ; i++){
        a[i]=finalans[i];

    }
    vector<int> b(n2);
    for(int i=0; i<n2; i++){
        b[i]=finalans[i+n1];
    }
    mergesort(a);
    mergesort(b);
    merge(a,b,finalans);

}
int main(){
    int arr[]={3,47,5,85765,7,5};
     
    int n=sizeof(arr)/4;
    int brr[]={5,6,7,8};
    int m=sizeof(brr)/4;
    vector<int> u(arr,arr+n);
    vector<int> v(brr,brr+m);
    vector<int> finalans(n+m);
   for(int x: u) cout<<x<<" ";
    cout<<endl;
    for(int y: v) cout<<y<<" ";
    cout<<endl;
    merge(u,v,finalans);
    mergesort(finalans);
    for(int o: finalans ) cout<<o<<" ";
    

    
}