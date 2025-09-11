#include<iostream>
using namespace std;

void printNo(int n){
    if(n==0){
        return;
    }
    printNo(n-1);
    cout<<n<<" ";
}

int main(){
    printNo(10);
    return 0;
}