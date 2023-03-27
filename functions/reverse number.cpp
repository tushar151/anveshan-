
#include <iostream>

using namespace std;
int revv(int n){

     int rev=0;
     while(n!=0){
    int temp=n%10;
    rev=rev*10+temp;
    n=n/10;
}
return rev;
}

int main()
{
    int n;
    cout<<"enter the number you want reverse:";
    cin>>n;
   
    cout<<"reverse is "<<revv(n);

    return 0;
}