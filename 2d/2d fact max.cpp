#include<iostream>
#include<climits>
using namespace std;
int facto(int max){
    int fact=1;
    if(max==0 || max==1){
        return 1;
    }
    for(int i=2;i<=max;i++){
        fact=fact*i;

    }
    return fact;
}
int main(){


    int arr[3][3];
    int max=INT_MIN;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
        }
    }
   
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            int element=arr[i][j];
            if(element>max){
                max=element;
               
            }
        }
    }
   cout<<"max is: "<<max<<endl;
   cout<<facto(max);
}