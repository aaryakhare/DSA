#include<iostream>
using namespace std;
void prime(int n){
    bool isPrime = true;
    if(n<=1){
        isPrime = false;
    }
    else{
    for(int i = 2; i<=(n/2); i++){
        if(n % i == 0){
           isPrime = false;
           break;
        }
    }
}
    if(isPrime){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
    }
int main(){ 
    int n;
    cout<<"Enter n : ";
    cin>>n;
    prime(n);
    cout<<endl;
}