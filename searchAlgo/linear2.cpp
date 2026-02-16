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
    int n, target; 
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enter target : ";
    cin>>target;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter element : ";
        cin>>arr[i];
    }
    search(arr, n, target);
}