#include<iostream>
using namespace std;

class DynamicArray{
    private:
    int *array;
    int size;
    int capacity;

    public: 
    DynamicArray(){
        cout<<"default constructor"<<endl;
        array = new int[1];
        size = 0;
        capacity = 1;
    }

    int getSize(){
        return size;
    }

    int getCapacity(){
        return capacity;
    }

    void insert(int index,int value){
        
    }
    ~DynamicArray(){
        delete[] array;
        size = 0;
        capacity = 0;
    }
};

int main(){
    DynamicArray a;
    cout<<"capacity : " <<a.getCapacity()<<endl;
    cout<<"size : " <<a.getSize()<<endl;
    return 0;
}