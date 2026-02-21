// max subarray sum or Kadane algorithm
#include<iostream>
#include<vector>
using namespace std;
int maxsum(vector<int>&vec){
    int current = 0, maxSum = INT16_MIN;
   for(int i = 0; i<vec.size(); i++){
          current += vec[i];
          maxSum = max(current,maxSum);
          if(current<0){
            current = 0;
          }
   }
   return maxSum;
}
int main(){
    int n; 
    cout<<"Enter size : ";
    cin>>n;
    vector<int> vec;
    for (int i = 0; i<n; i++){
        int val = 0;
        cout<<"Enter element : ";
        cin>>val;
        vec.push_back(val);
    }
    cout<<"Array is : "<<endl;
    for(int val : vec){
        cout<<val<<endl;
    }
    cout<<"Max Sum is : "<<maxsum(vec);
}