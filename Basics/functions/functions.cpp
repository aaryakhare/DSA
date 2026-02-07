#include<iostream>
using namespace std;
int minimum(int a, int b){
    if(a>b){
    return b;
    }
    else {
        return a;
    }
}
    int main(){
    cout<<min(5,4)<<endl;
    cout<<min(1,10)<<endl;
}