#include<iostream>
#include<deque>
#include<iterator>
using namespace std;

int main(){
    deque<int>d;
    d.push_back(2);
    d.push_back(5);
    d.push_back(3);
    d.push_back(3);
    d.push_back(9);

    for(auto it : d){
        cout<<it<<" ";
    }
}