/* 
A 
B B
C C C
D D D D
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    char ch = 'A';
    for(int i = 1; i<=n; i++){
       for(int j = 0; j<i; j++){
        if(ch >90)
        break;
       cout<<ch<<" ";
    }
    cout<<endl;
     ch++;
}
}
