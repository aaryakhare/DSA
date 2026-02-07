#include<iostream>
using namespace std;

int fact(int n){
    int fac = 1;
    for(int i = 1; i<=n; i++){
        fac*=i;
    }
    return fac;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<fact(n)<<endl;
}