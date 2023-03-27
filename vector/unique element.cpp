
#include <iostream>
#include<vector>

using namespace std;
int uniquek(vector<int>arr){

     int res=0;
     for(int i=0;i<arr.size();i++){
         res=res^arr[i];
     }
     return res;
}



int main()
{
    int n;
    cout<<"enter number of elements in array:";
    cin>>n;
    vector<int>arr(n);
   
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueko=uniquek(arr);
    cout<<"unique element is: "<<uniqueko<<endl;

    return 0;
}