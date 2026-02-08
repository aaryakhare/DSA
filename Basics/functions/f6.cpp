#include<iostream>
using namespace std;
int Prime(int n){
    if(n<=1){
     return 0;
    }
    else{
        for(int i = 2; i<+(n/2); i++){
            if(n % i == 0){
                return 0;
            }
            else {
                return 1;
            }
        }
    }
}
void PrimeNums(int n){
    for(int i = 2; i<=n; i++){
        if(Prime(i) == 1){
            cout<<i<<endl;
        }
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    PrimeNums(n); 
   }