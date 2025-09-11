#include<iostream>
using namespace std;

class employee{
    int x;
    int y;

    public:
    employee(int x, int y){
        this->x = x;
        this->y = y;
    }
    void display(){
        cout<<"value of x : "<< x <<endl<<"value of y : "<< y <<endl;
    }
};
 
int main(){
    // int *p = new int(12);
    // int *s = new int;
    // *s = 56;
    // cout<<*p<<endl;
    // cout<<*s<<endl;
    // // cout<<p<<endl;
    // delete p;
    // delete s;
    // // array

    // int *arr = new int[10];
    // cout<<"enter the array : ";
    // for(int i = 0; i<10; i++){
    //     cin>>p[i];
    // }
    // cout<<endl;
    // for(int i = 0; i<10; i++){
    //     cout<<p[i]<<" ";
    // }
    // delete []arr;
    
    employee *e = new employee(1,2);
    e->display();
    delete e;
    return 0;
}