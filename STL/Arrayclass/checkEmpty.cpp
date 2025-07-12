#include<iostream>
#include<array>
using namespace std;

int main(){
    // empty()
    array <int,5>arr = {1,2,3,4,5};
    if(arr.empty()){
        cout<<"array is empty "<<endl;
    }else{
        cout<<"array is not empty "<<endl;
    }

    // sum of the first and last element of the array using array class
    cout<<"sum of the first and last element of the array arr : " <<arr.front()+arr.back()<<endl;

    // sorting of array using STL
    array <int,5>arr2 = {3,2,5,6,4};
    
}