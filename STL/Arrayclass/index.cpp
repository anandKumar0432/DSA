#include<iostream>
#include<array>
#include<tuple>
using namespace std;

int main(){
    array <int,5>arr = {1,2,3,4,5};

    for(int i = 0; i<5; i++){
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    // const int x = 3;
    // cout<<get<x>(arr)<<endl;

    cout<<"1st element of the array : "<<arr.front()<<endl;
    cout<<"last element of the array : "<<arr.back()<<endl;

    array <int, 4>arr2;
    cout<<arr2.empty()<<endl;

}