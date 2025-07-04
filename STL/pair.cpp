#include<bits/stdc++.h>
using namespace std;

void learnPair(){
    pair<int , int> p = {1,2};
    pair<int,pair<int,int>>p2 = {1,{2,3}};
    pair<int,int>arr[] = {{1,2},{3,4},{5,6}};
    cout<<p.second<<endl;
    cout<<p2.second.second<<endl;
    cout<<arr[2].second<<endl;
}

int main(){
    learnPair();
    return 0;
}