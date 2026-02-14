// find smallest and the largest in array

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
     int arr[n];
     for(int i = 0; i<n; i++){
        cout<<"Enter element : ";
        cin>>arr[i];
     }
     int smallest = INT16_MAX, largest = INT16_MIN;
     for(int i = 0; i<n; i++){
        smallest = min(arr[i],smallest);
        largest = max(arr[i],largest);
     }
     for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
     }
     cout<<"Smallest : "<<smallest<<endl<<"Largest : "<<largest<<endl;
}