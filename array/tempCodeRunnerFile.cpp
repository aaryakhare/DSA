//print unique value
#include<iostream>
using namespace std;
void unique(int arr[], int n){
    bool got = false;
    for(int i = 0; i<n; i++){
        bool uni = true;
        for(int j = 0; j<n; j++){