//swap max and min of an array
#include<iostream>
using namespace std;
void swapMaxMin(int arr[],int n){
    int max = 0, min = 0;
    for(int i = 1; i<n; i++){
        if(arr[i]>arr[max]){
            max = i;
        }
        if(arr[i]<arr[min]){
            min = i;
        }
    }
swap(arr[max],arr[min]);
        
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
for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"After swap"<<endl;
    swapMaxMin(arr,n);
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}