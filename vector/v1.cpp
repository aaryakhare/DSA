//unique num 
#include<iostream>
#include<vector>  //imp for vector
using namespace std;
int unique(vector<int> &vec){
    int ans = 0;
    for(int val : vec){
        ans ^= val;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter size : ";
    cin>>n;
    vector<int>vec;
    for(int i = 0; i<n; i++){
        int val=0;
        cout<<"Enter element : ";
        cin>>val;
        vec.push_back(val);
    }
    cout<<"Vector is : "<<endl;
    for(int val : vec){
        cout<<val<<endl;

    }
    cout<<"num : "<<unique(vec);
}
