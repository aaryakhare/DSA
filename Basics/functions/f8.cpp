 // reverse num 

 #include<iostream>
 using namespace std;
 int rev(int n){
    int ans = 0;
    while(n>0){
        int reverse = n % 10;
        n/=10;
        ans = (ans *10)+reverse;
    }
    return ans;
 }

 int main(){
    int n;
    cout<<"Enter any num : ";
    cin>>n;
    cout<<rev(n);
 }