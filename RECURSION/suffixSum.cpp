#include<iostream>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5};
    int size = arr.size();
    vector<int> b;
    b[size] = arr[size];

    for(int i = size-1; i>=0; i--){
        b[i] = b[i+1] + arr[i];
    }

    for(int i = 0; i<b.size(); i++){
        cout<<b[i]<<" ";
    }
}