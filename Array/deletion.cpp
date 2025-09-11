#include<iostream>
using namespace std;

class array
{   
    private: 
    int arr[10];
    int size = 0;

    public:
    void insert(int index,int value){
        a[index] = value;
        size++;
    }
    int get(int index){
        return a[index];
    }
    int getSize(){
        return size;
    }
};

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
    arrray a;
    int n,x;
    cout<<"enter12 the index : ";
    cin>>n;
    cout<<"enter the value : ";
    cin>>x;
    a.insert()

    return 0;
}