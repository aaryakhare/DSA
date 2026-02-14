#include<iostream>
using namespace std;
int linearSearch(int arr[], int n,int target){
    for(int i = 0; i<n; i++){
        if(arr[i] == target)
        return i;
    }
    return -1;
}
int main(){
   int n,target;
   cout<<"Enter size : ";
   cin>>n;
   cout<<"Enter target : ";
   cin>>target;
   int arr[n];
   for(int i = 0; i<n; i++){
    cout<<"enter element : ";
    cin>>arr[i];
   }
   cout<<linearSearch(arr,n,target);
   
}
