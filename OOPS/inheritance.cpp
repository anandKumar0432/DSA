#include<iostream>
using namespace std;

class Animal{
    public:
    void sound(){
        cout<<"animals have the sound "<<endl;
    }
};

class Dog : public Animal{
    public: 
    void dog(){
        sound();
        cout<<"I'm in the class dog"<<endl;
    }
};

int main(){
    Dog d;
    d.dog();
    d.sound();
    return 0;
}