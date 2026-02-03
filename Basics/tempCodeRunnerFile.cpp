#include<iostream>
using namespace std;
int main(){
    char a;
    cout<<"enter an alphabet : ";
    cin>>a;
    if(a>=65 && a<=96)
    cout<<"Uppercase"<<endl;
    else if(a>=97 && a<=112)
    cout<<"Lowercase"<<endl;
    else
    cout<<"Not an Alphabet"<<endl; 

}