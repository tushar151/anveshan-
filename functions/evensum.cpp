#include <iostream>
using namespace std;
int evend(int a){
    int sum=0;
    for(int i=2;i<=a;i++){
       if(i%2!=0){
         continue;

       }
       else{
           sum=sum+i;
       }
    }
    return sum;
}
int main()
{
   int a;
   cin>>a;
   int r=evend(a);
   cout<<r;
}