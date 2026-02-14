// index of smallest and largest num in array 
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
    int largest_i = 0, smallest_i = 0;
    for(int i = 1; i<n; i++){
        int largest = arr[0], smallest = arr[0];
        if(arr[i]>largest){
        largest = arr[i];
        largest_i = i;}
        if(arr[i]<smallest)
        smallest = arr[i];
        smallest_i = i;
    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"largest : "<<largest_i<<endl<<"smallest : "<<smallest_i;
}