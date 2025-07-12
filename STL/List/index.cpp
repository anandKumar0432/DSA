#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>ls;
    ls.push_back(23);
    ls.push_back(26);
    ls.push_back(25);
    ls.push_back(24);
    ls.push_back(21);
    ls.push_back(21);
    ls.push_back(22);

    for(auto it : ls){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"first element of the list : "<< ls.front()<<endl;
    cout<<"last element of the list : "<< ls.back()<<endl;
    // cout<<"capacity of the list : "<<ls.capacity()<<endl; // there is no capacity of the list because it uses linked list under the hood so whenever new node comes it added to the next 
    cout<<"size of the list : "<<ls.size()<<endl;
    cout<<"max size : "<<ls.max_size()<<endl; // little bit confuse
    ls.push_front(56);
    
    // for(auto it : ls){
    //     cout<<it<<" ";
    // }

    // cout<<endl;

    // ls.pop_front();
    // ls.remove(25);
    // ls.remove(26); // it removes the present element in the list
    ls.remove(21);
    // for(auto it : ls){
    //     cout<<it<<" ";
    // }

    ls.clear();/
    cout<<"after clearing"<<endl;
    if(ls.empty()){
        cout<<"there is no element present in the list ->";
    }else{
        for(auto it : ls){
        cout<<it<<" ";
       }
    }

    list <int>ls2;

    // ls.splice(ls,ls.begin(),ls2)

    return 0;
}