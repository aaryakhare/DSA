#include<iostream>
using namespace std;
int main(){
    int num ;
    bool isprime = true;
    cout<<"Enter number : ";
    cin>>num;
    for (int i = 2; i<(num/2); i++){
        if(num%i == 0){
            isprime = false;
            break;
        }
    }
 isprime ? cout<<"Prime Number" : cout<<"Not a  Prime Number";
}