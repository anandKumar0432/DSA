#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int>v1;
    v1.push_back(13);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(2);
    v1.push_back(3);

    // for(auto it : v1){
    //     cout<<it<<" ";
    // }

    cout<<"front element of the v1 vector : "<<v1.front()<<endl;
    cout<<"back element of the v1 vector : "<<v1.back()<<endl;


    v1.insert(v1.begin()+2,15);
    cout<<*(v1.begin()+1)<<endl;

    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<endl;

    for(auto it  = v1.begin(); it!=v1.end(); it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    
    vector <int>::iterator x;
    for(auto x  = v1.begin(); x!=v1.end(); x++){
        cout<<*(x)<<" ";
    }
    cout<<endl;

    cout<<"capacity : "<< v1.capacity()<<endl;
    cout<<"size : "<< v1.size()<<endl;

    //-----------applying shrink_to_fit---------------------
    v1.shrink_to_fit();

    // applying resize() -------------------------------
    v1.resize(3);
    cout<<"capacity : "<< v1.capacity()<<endl;
    cout<<"size : "<< v1.size()<<endl;

    return 0;
}