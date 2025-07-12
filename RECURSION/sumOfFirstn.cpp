#include<iostream>
using namespace std;

int getSum(int n){
    if(n == 1){
        return 1;
    }

    int ans = n + getSum(n-1);
    return ans;
}

int main(){
    cout<<getSum(10);
    return 0;
}