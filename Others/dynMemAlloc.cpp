#include<iostream>
using namespace std;

int main(){
    int* ptr = new int; // declare pointer dynamically
    *ptr = 42;
    cout<<"Address : "<<ptr<<endl;
    cout<<"value : "<<*ptr<<endl;
    delete ptr; // deleting declared variable It is very necessary in cpp

    // dynamically declaring a array 
    int* arr = new int[5];

    for(int i = 0 ; i<5; i++){
        arr[i] = i * 10;
    }

    for(int i = 0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    delete[] arr; // deleting declared arr after its use It's very important stage Otherwise it ran throgh memory leak problem

    return 0;
}