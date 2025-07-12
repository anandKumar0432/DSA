/*
#include<iostream>
#include<array>
#include<iterator>
using namespace std;

const int n = 5;

int getSize(array <int,n>arr){
    return arr.size();
}

int main(){
    array <int,n>arr = {1,2,3,4,5};
    cout<<getSize(arr)<<endl;

    // Find the first and last element using the STL array.
    cout<<"first element is : "<<arr.front()<<endl;
    cout<<"last element is : "<<arr.back()<<endl;

    //4. Returns the element from the given index using the STL array
    cout<<"return the value at index 3 : "<< arr.at(3)<<endl;

    //6. Using STL to check whether an array is empty or not.
    if(arr.empty()){
        cout<<"array is empty"<<endl;
    }else{
        cout<<"array is not empty"<<endl;
    }

    //7. Sort an array in ascending order using sort() function in C++ STL
    array <int,6>arr2 = {5,6,7,2,1,4};
    // sort(arr2.begin(),arr2.end());
    for(int i = 0; i<arr2.size(); i++){
        cout<<arr2.at(i)<<" ";
    }

    return 0;
}

9. C++ program to find the integers which come an odd number of times in an array
using C++ STL



#include<iostream>
#include<array>
using namespace std;

int main(){
    array<int,8>arr = {1,4,3,2,2,5,3,5};
    
    return 0;
}

5. C++ STL program to demonstrate example of array::rbegin() and array::rend()
functions
rend -> reverse end
rbegin -> reverse begin
*/

#include<iostream>
#include<array>
#include<iterator>
// #include<reverse_iterator>
using namespace std;

int main(){
    array<int,5> arr = {1,2,3,4,5}; // reversed array -> 5,4,3,2,1
    // cout<<arr.rend()<<endl;/
    array<int,5>::reverse_iterator it;
    array<int,5>::iterator it2;
    // // it = arr.rend();
    // cout<<*(it)<<endl;
    cout<<"printing the array : ";
    for(it2 = arr.begin() ; it2!=arr.end(); it2++){
        cout<<*it2<<" ";
    }
    cout<<endl;
    cout<<*(arr.begin())<<endl;
    cout<<*(arr.rbegin())<<endl; // prints first element of the reversed array
    cout<<*(arr.rend())<<endl; // it point before the first element of the reversed array

    cout<<"printing reversed array : ";
    for(it = arr.rbegin(); it!=arr.rend(); it++){
        cout<<*it<<" ";
    }
    return 0;
}