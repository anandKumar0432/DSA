#include<iostream>
#include<map>
#include<iterator>
using namespace std;


int main(){

    map<int,int>mpp;
    mpp.insert(pair<int,int>(1,2));
    mpp.insert(pair<int,int>(2,22));
    mpp.insert(pair<int,int>(3,23));
    mpp.insert(pair<int,int>(4,21));
    mpp.insert(pair<int,int>(5,12));
    map<int,int>::iterator x;
    for(x = mpp.begin(); x!=mpp.end(); x++){
        cout<<"first-> " <<x->first<<" second-> "<<x->second<<endl;
    }
    cout<<endl;

    // using string as a key
    map<string,int>mpp2;
    mpp2.insert(pair<string,int>("anand",10));
    mpp2.insert(pair<string,int>("brij",20));
    mpp2.insert(pair<string,int>("rupesh",30));
    mpp2.insert(pair<string,int>("nitish",40));
    mpp2.insert(pair<string,int>("ritu",50));
    mpp2["kumar"] = 15;
    mpp2["kumar"] = 10;

    map<string,int>::iterator y;

    for(y = mpp2.begin(); y!=mpp2.end(); y++){
        cout<<"first-> " <<y->first<<" second-> "<<y->second<<endl;
    }

    map<int,char>mpp3;
    mpp3.insert(pair<int,char>(1,'a'));
    mpp3.insert(pair<int,char>(2,'b'));
    mpp3.insert(pair<int,char>(3,'c'));
    
    mpp3.insert(pair<int,char>(4,'d'));
    mpp3.insert(pair<int,char>(5,'e'));

    mpp3[4] = 'p';

    mpp3.erase(3);
    mpp3.insert(pair<int,char>(3,'t'));

    map<int,char>::iterator z;
    for(z = mpp3.begin(); z != mpp3.end(); z++){
        cout<<"key : "<<z->first<<" value : "<<z->second<<endl;
    }
    // cout<<mpp2[anand]<<endl;

    return 0;
}