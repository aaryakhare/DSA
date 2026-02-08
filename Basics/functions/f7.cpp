#include<iostream>
using namespace std;
int Fibonacci(int n){
    int first = 0;
    int sec = 1;
    int third = 0;
    int i = 0;
    while(i<n){
        first = sec;
        sec = third;
         third = first + sec;
        i++;
    }
    return sec;
}
int main(){
    cout<<Fibonacci(1);
}