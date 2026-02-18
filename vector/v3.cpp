//reverse 
#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int>&vec){
    int start = 0;
    int last = vec.size()-1;
    while(start<last){
        swap(vec[start],vec[last]);
        start++;
        last--;
    }
    cout<<"After reverse : "<<endl;
    for(int val :  vec){
        cout<<val<<endl;
    }
}
int main(){
    int n;
    cout<<"enter size : ";
    cin>>n;
    vector <int> vec;
    for(int i = 0; i<n; i++){
        int val = 0;
        cout<<"Enter element : ";
        cin>>val;
        vec.push_back(val);
    }
    for(int val : vec){
        cout<<val<<endl;
    }
    reverse(vec);
}