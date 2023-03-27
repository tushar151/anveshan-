#include <iostream>
using namespace std;
int linear(int arr[],int size,int key){

    for (int i=0;i<size;i++)
{
    if(arr[i]==key){
        return i;
    }
    
}
return -1;
}
int main() {
    int key;
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    cout<<"enter key: ";
    cin>>key;
    int result=linear(arr,size,key);
    if(result==-1){
        cout<<"key not found "<<endl;
    }
    else{
        cout<<"key found at: "<<result<<endl;
    }
   
}
