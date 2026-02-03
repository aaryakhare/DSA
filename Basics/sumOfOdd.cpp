#include<iostream>
using namespace std;
int main(){
    int n, sum = 0;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i = 1; i<=n; i+=2){
        sum+=i;
    }
    cout<<"Total sum : "<<sum;
    return 0;
}
// for even i = 0 rest same.