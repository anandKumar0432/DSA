#include<iostream>
#include<queue>
#include<iterator>

using namespace std;

int main(){
    queue<int>q;
    q.push(23);
    q.push(43);
    q.push(33);
    q.push(23);
    q.push(13);
    // queue<int>::iterator x;
    // for(x = q.begin(); x!=q.end(); x++){
    //     cout<<*x<<" ";
    // }
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}