//intersection of two arrays
#include<iostream>
using namespace std;
void print(int arr1[], int n, int arr2[], int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(arr1[i] == arr2[j]){
                 cout<<arr1[i]<<endl;
                 arr2[j] = -1;
                    break;
            }
        }
    }
}
int main(){
    int n,m;
    cout<<"Enter size of 1 array : ";
    cin>>n;
    cout<<"Enter size os 2 array : ";
    cin>>m;
    int arr1[n], arr2[m];
    cout<<"array 1"<<endl;
    for(int i = 0; i<n; i++){
        cout<<"enter element : ";
        cin>>arr1[i];
    }
    cout<<"array 2"<<endl;
    for(int i = 0; i<m; i++){
        cout<<"Enter element ";
        cin>>arr2[i];
    }
    print(arr1 , n , arr2 , m);
}