#include<iostream>
using namespace std;
int fact(int n){
    int fac = 1;
    for(int i = 2; i<=n; i++){
        fac*=i;
    }
    return fac;
}
int bino(int n, int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    cout<<bino(6,3);
}