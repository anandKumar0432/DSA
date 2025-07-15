#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
/*
1. List functions in C++ STL (Standard Template Library)

int main(){
    list<int>ls = {1,2,3,4,5};
    for(auto it : ls){
        cout<<it<<" ";
    }
    return 0;
}
*/

/*
2. Assign the elements to the list (different methods) - Example of list::assign() | C++

int main(){
    list<int>ls;
    list<int>ls2 = {3,5,6,6,7};
    // ls.assign({1,2,3,4,5});
    ls.assign(ls2.begin(),ls2.end());
    for(auto it : ls){
        cout<<it<<" ";
    }
    return 0;
}

*/

/*
3. Iterate a list C++ STL


int main(){
    list<int>ls = {1,2,3,4,5};
    list<int>::iterator it;
    for(it = ls.begin(); it!=ls.end(); it++){
        cout<<*it<<" ";
    }
    return 0;
}

*/

/*
4. Iterate a list in reverse order C++ STL


int main(){
    list<int>ls = {1,2,3,4,5};
    list<int>::reverse_iterator it;
    // for(it = ls.end(); it!=(ls.begin()); it--){
    //     cout<<*it<<" ";
    // }
    for(it = ls.rbegin(); it!=ls.rend(); it++){
        cout<<*it<<" ";
    }
    return 0;
}
*/

/*
5. Input and add elements to a list C++ STL


int main(){
    list<int>ls = {1,2,3,4,5};
}

*/
/*
6. Get the first and last element of the list C++ STL

int main(){
    list<int>ls = {1,2,3,4,5};
    cout<<"first element of the list : "<<ls.front()<<endl;
    cout<<"last element of the list : "<<ls.back()<<endl;
    return 0;
}
*/

/*
7. Insert the element at beginning and end of the list | C++ STL

int main(){
    list<int>ls = {3,4,5};
    ls.push_back(6);
    ls.push_front(2);
    for(auto it : ls){
        cout<<it<<" ";
    }
    return 0;
}
*/
/*
8. Remove all occurrences of an element and remove set of some specific from the list
*/
int main(){
    list<int>ls = {1,2,3,4,5,6};
    list<int>ls2 = {1,5,7,42,5,6};
    ls.clear(); // removed all occurence of the element in the list
    cout<<"check element in the list : "<< ls.empty()<<endl;
    ls.erase(ls2.begin(),{1,5,7});
    for(auto it : ls2){
        cout<<it<<" ";
    }
    return 0;
}
/*
9. Remove all consecutive duplicate elements from the list | C++ STL
10. Merge two lists C++ STL
11. Creating a list by assigning the all elements of another list C++ STL
12. Assign a list with array elements C++ STL
13. Push characters in a list and print them separated by space in C++ STL
14. Access elements of a characters list using const_iterator in C++ STL
*/