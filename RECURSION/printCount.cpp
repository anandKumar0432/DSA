#include<iostream>
using namespace std;

// printing n to 1
void printCount(int n){
    //Base case
    if(n==0){
        return;
    }
    //processing
    cout<<n<<" ";
    //recursive call
    printCount(n-1);
}
//print count 1 to n
void print(int n){
    if(n==0){
        return;
    }

    print(n-1);

    cout<<n<<" ";
}

int main(){
    // printCount(10);
    print(10);
    return 0;
}