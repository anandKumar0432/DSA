#include<iostream>
using namespace std;

void reverseString(string str,int idx){
    if(idx >= str.length()){
        return;
    }

    reverseString(str,idx+1);
    cout<<str[idx];
}

int main(){
    reverseString("abc",0);
    // string str = "anand";
    // cout<<str.length()<<endl;
    return 0;
}