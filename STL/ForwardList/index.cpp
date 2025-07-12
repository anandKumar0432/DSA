#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int>fl = {1,2,3,4,5};
    forward_list<int>::iterator x;
    for(x = fl.begin(); x!=fl.end(); x++){
        cout<<*x<<" ";
    }

    forward_list<int>fl2;
    fl2.insert(fl2.begin(),12);

    // cout<<"hii there ";ṇ
    return 0;
}