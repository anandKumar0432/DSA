#include<iostream>
#include<vector>
using namespace std;

void printEven(vector<int> &v, int index, int size){
    if(index >= size){
        return;
    }

    if(v[index] % 2 == 0){
        cout<<v[index]<<" ";
    } 
    printEven(v, index+1, size);
}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    int size = v.size();
    printEven(v, 0, 6);
    return 0;
}