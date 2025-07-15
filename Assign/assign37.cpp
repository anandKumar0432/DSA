#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

/* q.1
int main(){
    vector<int>v = {1,2,3,4,5};
    vector<int>::iterator it;
    for(it = v.begin(); it!=v.end(); it++){
        cout<<*it<<" ";
    }
    
    return 0;
}

Q.2

int main(){
    vector<int>v;
    v.push_back(12);
    v.push_back(22);
    v.push_back(32);
    v.push_back(42);
    v.push_back(52);

    for(auto it : v){
        cout<<it<<" ";
    }
    
    return 0;
}

Q.3

void printVectorArray(){
    vector<int>v;
    cout<<"Enter the size of the array vector : ";
    int n;
    cin>>n;
    int x;
    for(int i = 0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }
    for(auto it : v){
        cout<<it<<" ";
    }
}

int main(){
    printVectorArray();
    return 0;
}

Q.$ Copy one vector elements into another vector


int main(){
    vector<int>v1 = {1,2,3,4,5};
    vector<int>v2;
    v2.assign(v1.begin(), v1.end()); // copy v1 vector element into the v2
    
    cout<<"printing v1 vector : ";
    for(auto it : v1){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<"printing v2 vector : ";
    for(auto it : v2){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;
}

Q.5 find largest and smallest element into the vector

Q.8 find common element in two vector
*/
int main(){
    
    vector<int>v1 = {1,2,3,4,5};
    vector<int>v2 = {3,4,2,7,8};
    vector<int>v3;
    
    set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(v3));
    for(int i = 0; i<v3.size(); i++){
        cout<<v3.at(i)<<" ";
    }

    return 0;
}