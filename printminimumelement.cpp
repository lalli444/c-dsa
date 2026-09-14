#include<iostream>
#include<climits>
using namespace std;
int main(){
             int m;
             cout<<" inter the row = ";
             cin>>m;
             int n;
             cout<<"inter the colum = ";
             cin>>n;

             int arr[m][n];
             cout<<"inter the element of arr= ";
             for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    cin>>arr[i][j];
                }
             }

             int x=INT16_MAX;
             
             
             for(int i=0; i<m; i++){
                for(int j=0; j<n; j++){
                    if(x>arr[i][j]){
                        x=arr[i][j];
                    }
                }
             }
             cout<<x<<endl;












}
