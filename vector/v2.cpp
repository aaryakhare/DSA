//linear search
#include<iostream>
#include<vector>
using namespace std;
void search(vector<int> &vec, int n){
    bool got = false;
   for(int i = 0; i< vec.size(); i++){
    if(vec[i] == n){
        cout<<"Found at : "<<i<<endl;
        got = true;
    }
   }
   if(got == false){
    cout<<"Not found"<<endl;
   }
}
int main(){
    int n,x;
    cout<<"Enter size : ";
    cin>>n;
    cout<<"Enetr target : ";
    cin>>x;
    vector<int>vec;
    for(int i = 0; i<n; i++){
        int val=0;
        cout<<"Enter element : ";
        cin>>val;
        vec.push_back(val);
    }
    for(int val : vec){
        cout<<val<<endl;

    }
    search(vec, x);
}