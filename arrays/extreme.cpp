#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
   int size=sizeof(arr)/sizeof(int);
   int start=0;
   int end=size-1;
   while(true){
       if(start>end){
           break;
       }
       if(start==end){
           cout<<arr[end]<<endl;
       }
       else{
           cout<<arr[start]<<endl;
           cout<<arr[end]<<endl;
       }
       start++;
       end--;
   }
}
