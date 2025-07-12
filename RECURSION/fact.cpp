#include<iostream>
using namespace std;

int fact(int n){
    //Base case
    if(n==0 || n==1){
        return 1;
    }
    // processing
    int facto = n * fact(n-1);
    //recursive call
    return facto;
}

int main(){
    cout<<fact(8);
    return 0;
}