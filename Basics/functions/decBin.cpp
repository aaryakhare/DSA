      // decimal num into binary num

#include<iostream>
using namespace std;
int binNum(int dec){
    int ans = 0, pow = 1;
    while(dec > 0){
        int rem = dec % 2;
        dec /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int main(){
    int n; 
    cout<<"Enter decimal num : ";
    cin>>n;
   cout<<binNum(n);
}