#include<iostream>
#include<forward_list>
#include<iterator>
using namespace std;

int main(){
    forward_list<float> l1 = {2.5,3.3,4.9,5.3,6.2};
    forward_list<float>l2;

    l2.assign(l1.begin(),l1.end());
    for(auto it : l2){
        cout<<it<<" ";
    }

    forward_list<float>::iterator it;
    it  = l1.begin();
    it++;
    it++;
    it++;
    l1.insert_after(it,4);
    
    for(auto it : l1){
        cout<<it<<" ";
    }

    return 0;
}