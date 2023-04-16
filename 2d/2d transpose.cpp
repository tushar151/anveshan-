#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int arr[n][m];
    int trans[m][n];
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            trans[j][i]=arr[i][j];
           
               
            }
        }
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"TRANSPOSED : "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
    }
  
