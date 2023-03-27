#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,0,0,0,0,0,0,0,1,1,1,1,1};
   int size=sizeof(arr)/sizeof(int);
   int zeros=0;
   int ones=0;
   for(int i=0;i<size;i++){
       if(arr[i]==0){
           zeros++;
       }
       else{
           ones++;
       }
   }

cout<<"Number of zeros are: "<<zeros<<endl;
cout<<"Number of ones are: "<<ones;
   
}
