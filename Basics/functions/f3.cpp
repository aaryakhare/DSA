#include<iostream>
using namespace std;
int add(int n){
    int sum = 0;
    while(n>0){
        int last = n % 10;
         n/=10;
         sum +=last;
    }
    return sum;
}
int main(){
    cout<<add(123);
}