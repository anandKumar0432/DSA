#include<iostream>
using namespace std;
template<class T, class F, class P , class Z>

Z largest(T x, F y, P z){
    if(x>y && x>z){
        return z;
    }else if(y>x && y>z){
        return y;
    }else{
        return z;
    }
}

int main(){
    float large = largest<int,float,float,float>(45,89.5,56.3);
    cout<<"largest among three : "<<large<<endl;
    return 0;
}