//sum and product
#include<iostream>
using namespace std;
int sum(int arr[], int n){
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}
int product(int arr[], int n){
    int mul = 1;
    for(int i = 0; i<n; i++){
        mul *= arr[i];
    }
    return mul;
}
int main(){
int n;
cout<<"Enter size : ";
cin>>n;
int arr[n];
for (int i = 0; i<n; i++){
    cout<<"Enter element : ";
    cin>>arr[i];
}
cout<<"Sum : "<<sum(arr,n)<<endl;
cout<<"Product : "<<product(arr,n);
}