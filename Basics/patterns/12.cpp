/* 
A 
B A
C B A
D C B A
E D C B A
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
   for(int i = 0; i<n; i++){
    char ch ='A'+i;
    for (int j = i+1; j>0; j--){
        if(ch>90 || ch<65)
        break;
        cout<<ch<<" ";
        ch--;
    }
    cout<<endl;
   }
}