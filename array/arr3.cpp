//reverse the array 
#include<iostream>
using namespace std;
void rev(int arr[],int n){
    int last = n-1, first = 0;
    while(first<last){
        swap(arr[first],arr[last]);
        last--;
        first++;
    }
   for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
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
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<endl;
    }
     cout<<"reversed array -: "<<endl;
 rev(arr,n);
}