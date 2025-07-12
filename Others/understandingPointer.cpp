#include<iostream>
using namespace std;

int main(){
    int arr[5] = {11,2,3,4,5};

    cout<<arr<<endl; // arr is a pointer pointing first element of the array i.e. it stores the address of the first element of the array 
    cout<<"value of arr[0]: "<<*arr<<endl; //arr[0] is same as the (*arr)
    cout<<"printing addresses of the arr[1] : "<<(arr+1)<<endl;
    cout<<"printing value of the arr[1] : "<<*(arr+1)<<endl;

    cout<<"value of arr[2]  :"<<2[arr]<<endl;
    return 0;
}