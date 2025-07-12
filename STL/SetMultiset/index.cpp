#include<iostream>
#include<set>
#include<iterator>
// #include<queue>
using namespace std;

int main(){

    set<float>s;
    set<float>::iterator it;
    s.insert(12.5);
    s.insert(22.5);
    s.insert(42.5);
    s.insert(32.5);
    s.insert(52.5);
    for(it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    s.erase(22.5);
    for(it = s.begin(); it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    

    return 0;
}