#include<iostream>
using namespace std;

void printDigit(int num){
    if(num == 0){
        return;
    }

    int res = num % 10;
    printDigit(num/10);
    cout<<" --> "<<res;
}

int main(){
    printDigit(355);
    return 0;
}