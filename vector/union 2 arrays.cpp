
#include <iostream>
#include<vector>

using namespace std;


int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int arr1[]={4,5,6,9,8,10};
    int j=sizeof(arr)/sizeof(int);
    int k=sizeof(arr1)/sizeof(int);
   vector<int>ans;
   for(int i=0;i<j;i++){
       ans.push_back(arr[i]);
   }
    for(int i=0;i<j;i++){
       ans.push_back(arr1[i]);
   }
   cout<<endl;

   for(int s=0;s<j+k;s++){
       cout<<ans[s]<<" ";
   }

    return 0;
}