#include<iostream>
using namespace std;

int facto(int n){
    if(n==1 || n==0){
        return 1;
    }
    
    int fact = n * facto(n-1);
    return fact;
}

int main(){
    int fact = facto(5);
    cout<<"fact : "<<fact<<endl;
    return 0;
}