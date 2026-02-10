    // binary num to decimal num

#include<iostream>
using namespace std;
int binDec(int bin){
    int ans = 0, pow = 1;
    while(bin > 0){
        int rem = bin %10;
        ans += (rem * pow );
        bin /= 10;
        pow *=2;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter a binary num : ";
    cin>>n;
    cout<<binDec(n);
}