#include<iostream>
using namespace std;

template<class T, class F, class P>

P largest(T x , F y){
    if(x>y){
        return x;
    }else{
        return y;
    }
}

int main(){
    float large = largest<int,float,float>(12,89.5);
    cout<<large<<endl;
    return 0;
}