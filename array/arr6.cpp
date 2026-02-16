//print unique value
#include<iostream>
using namespace std;
void unique(int arr[], int n){
    bool got = false;
    for(int i = 0; i<n; i++){
        bool uni = true;
        for(int j = 0; j<n; j++){
            if(i != j && arr[i] == arr[j]){
             uni = false;
             break;
            }
        }
        if(uni == true){
            cout<<arr[i];
            got = true;
        }
    }
        if(got == false){
            cout<<"no unique num.";
        }
}
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cout<<"Enter element : ";
        cin>>arr[i];
    }
   unique(arr,n);
}