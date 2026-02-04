#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    char ch = 'A';
    for(int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                if(ch > 90)
                break;
            cout<<ch<<" ";
            ch++;
          }
           cout<<endl;
        }  
}
