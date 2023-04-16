#include<iostream>
#include<climits>
using namespace std;
int main(){

    int arr[3][3];
    int max=INT_MIN;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
   
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            int element=arr[i][j];
            if(element>max){
                max=element;
               
            }
        }
    }
   cout<<"max is: "<<max<<endl;
}