#include<bits/stdc++.h>
using namespace std;

void eraseVector(){
    vector<int>v(5,400);
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    v.erase(v.begin()+1);
    for(auto it : v){
        cout<<it<<" ";
    }
}

void explainInsert(){
    vector<int>v(2,100); // {100,100}
    for(auto it : v){
        cout<<it<<" ";
    }

    cout<<endl;
    v.insert(v.begin(),300);
    v.insert(v.begin()+1, 2, 500);

    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    vector<int>copy(2,90);
    v.insert(v.begin()+1, copy.begin(), copy.end());
    for(auto it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<v.size()<<endl;
    // SWAPPING OF VECTOR 
    vector<int>v1(7,5);
    vector<int>v2(7,8);
    cout<<"before swapping : "<<endl;
    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it : v2){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"after swapping"<<endl;
    v1.swap(v2);
    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto it : v2){
        cout<<it<<" ";
    }
}

void explainVector(){
    // eraseVector();
    explainInsert();
    vector<int>v;
    v.push_back(12);
    v.push_back(22);
    v.push_back(18);
    v.push_back(17);
    v.push_back(13);
    v.push_back(10);
    v.emplace_back(13);
    // vector<pair<int,int>> vecPair;
    // vecPair.push_back({1,2});
    // vecPair.emplace_back(1,6);
    // cout<<v[0]<<endl;
    // cout<<vecPair[1].second<<endl;
    // vector<int>v2(9,7); //(9,7) 9 is the initial size of the vector and 7 is the value {7,7,7,7,7,7,7,7,7}
    // cout<<v2[5]<<endl;

    // // cout<<v<<endl;
    // cout<<"hii from the vector"<<endl;

    // ITERATOR
    // vector<int>::iterator it = v.begin();
    // vector<int>::iterator it = v.end(); //its pointing next to the end of the vector
    // it--;
    // cout<< *(it) <<endl;
    // cout<<"v.back : "<< v.back() <<endl;
    // // it++;
    // // cout<< *(it)<<endl;

    // // reverse of the vector
    // vector<int>::reverse_iterator it2 = v.rend(); // pointing right before the first element of the reversed vector
    // it2--;
    // cout<<"reverse end : "<<*(it2)<<endl;
    // vector<int>::reverse_iterator it3 = v.rbegin(); // pointing the memory of the last element of the reversed vector
    // cout<<"reverse begin : "<<*(it3)<<endl;

    // Iterating on the vector 
    //  1st METHOD TO ITERATING ON VECTOR
    // cout<<"using iterator : ";
    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<" ";
    // }


    // //2nd METHOD (using auto)
    // cout<<endl;
    // cout<<"using auto : ";
    // for(auto it = v.begin(); it != v.end(); it++){
    //     cout<<*(it)<<" ";
    // }

    // // 3rd METHOD using foreach loop
    // cout<<endl;
    // cout<<"using for each loop : ";
    // for(auto it : v){
    //     cout<<it<<" ";
    // }
}
//list
void explainList(){
    list<int>ls;
    ls.push_back(12);
    ls.emplace_back(23);
    ls.push_front(20);
    ls.emplace_front(15);
    // rest same as the vector 
    for(auto it : ls){
        cout<<it<<" ";
    }
}

// STACK 
void explainStack(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.emplace(7);

    cout<<"top of the stack before popping : " <<st.top()<<endl;
    st.pop();
    cout<<"top of the stack : "<<st.top()<<endl;
    cout<<"size: "<<st.size()<<endl;
    cout<<"is empty : "<<st.empty()<<endl;

    stack<int> st1, st2; 
    st1.swap(st2); 
}

// queue

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(4);
    q.push(3);
    q.push(2); // q --> {1,4,3,2}

    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;

}

// priority queue

void explainPriorityQueue(){
    //MAX_HEAP
    priority_queue<int> pq;
    pq.push(1);
    pq.push(12);
    pq.push(3);
    pq.emplace(4);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;

    // MIN_HEAP
    priority_queue<int, vector<int>, greater<int>>mpq;
    mpq.push(11);
    mpq.push(12);
    mpq.push(32);
    mpq.emplace(4);
    cout<<mpq.top()<<endl;
    mpq.pop();
    cout<<mpq.top()<<endl;
}

// SET

void explainSet(){
    set<int> st; // it maintain sorting and unique element
    st.insert(4);
    st.insert(4);
    st.insert(41);
    st.insert(12);
    st.emplace(23);

    // auto it = st.find(56);
    // cout<<*(it)<<endl;
    auto it = st.find(12);
    auto it2 = st.find(41);

    // st.erase(it,it2); //{4,41}

    for(auto it : st){
        cout<<it<<" ";
    }

    auto it3 = st.lower_bound(23);
    auto it4 = st.upper_bound(23);
    cout<< *it3<<" "<< *it4<<endl;
}

void explainMultiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    // ms.erase(1);
    int cnt = ms.count(1);
    cout<<"number of 1 : "<<cnt<<endl;

    ms.erase(ms.find(1));

    int cnt1 = ms.count(1);
    cout<<"number of 1 : "<<cnt1<<endl;

    for(auto it : ms){
        cout<<it<<" ";
    }
}

void explainUset(){
    unordered_set<int>us;
    us.insert(5);
    us.insert(6);
    us.insert(7);
    us.insert(8);
    us.insert(9);

    for(auto it : us){
        cout<<it<<" ";
    }
}

void explainMap(){
    map<int,int>mpp1;
    map<int,pair<int,int>> mpp2;
    map<pair<int,int>,int> mpp3;

    mpp1[1] = 4;
    // mpp1.emplace({2,4}); // not supported in this version
    mpp1.insert({3,4});
    mpp1.insert({2,8});

    for(auto it: mpp1){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp1[3]<<endl;
    cout<<mpp1[2]<<endl;

    auto it = mpp1.find(3);
    cout<<it->second<<endl;
}

void explainMultiMap(){
    multimap<int,int>mpp; // It's not unique
    mpp.insert({2,3});
    mpp.insert({2,3});
    mpp.insert({2,3});

    for(auto it: mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
    // explainVector();
    // explainList();
    // explainStack();
    // explainQueue();
    // explainPriorityQueue();
    // explainSet();
    // explainMultiset();
    // explainUset();
    // explainMap();
    explainMultiMap();
    return 0;
}