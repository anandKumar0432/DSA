#include<iostream>
using namespace std;
template<class T, class F, class P>

void swap(T &x, T &y){
    P temp = y;
    y = x;
    x = temp;
    cout<<"in the swap fn : "<< x<<" "<<y<<endl;
}

int main(){
    int x = 3;
    float y = 9.8;
    cout<<"before swapping : "<< x<<" "<<y<<endl;
    swap<int,float,float>(x,y);
    cout<<"after swapping : "<< x<<" "<<y<<endl;
}