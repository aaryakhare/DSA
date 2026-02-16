#include<iostream>
using namespace std;
void search(int arr[] , int n, int target){
    bool got = false;
    for (int i = 0; i < n; i++){
       if(arr[i] == target){
              cout<<"index : "<<i<<endl;
          got = true;
       }
    }
    if(got == false){
        cout<<"Element not found"<<endl;
    }
}
int main(){
    int n; 
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    int target ;
    cout<<"Enter target : ";
    cin>>target;
    for(int i = 0; i<n; i++){
        cout<<"Enter element : ";
        cin>>arr[i];
    }
    search(arr, n, target);
}