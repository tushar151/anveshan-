#include <iostream>
using namespace std;
int maxi(int a,int b,int c){
    if(c>=a and c>=b){
       return c;
    }
    else if(a>=c and b>=c){
        return a;
    }
    else { return b;
    
    }
}
int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   cout<<maxi(a,b,c)<<" is Largest";
}