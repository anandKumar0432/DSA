#include<iostream>
using namespace std;

int pow(int n){
    if(n==0){
        return 1;
    }

    return (2 * pow(n-1)); // 2* pow(3) => 2*pow(2) =>  2*pow(1) => 2 * pow(0)
}

int main(){
    cout<<pow(4);
    return 0;
}
// 2* 2* 2 * 2 = 16