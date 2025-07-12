#include<iostream>
using namespace std;
// template<class T, class F, class P>
template<class Z>

Z addTwo(Z x , Z y){
    return x + y;
}

// P add(T x , F y){
//     return x + y;
// }

int main(){
    // int sum = add<float,int,float>(12.5,6.7);
    int sum = addTwo<int>(12,14);
    cout<<sum<<endl;
    return 0;
}