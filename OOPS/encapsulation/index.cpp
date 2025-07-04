#include<iostream>
using namespace std;

class Student{
    public: 
    int rollNo;
    int age;
    int nos;
    string name;
    float *gpa;

    // Constructor
    Student(int rollNo, int age, int nos, string name, float gpa){
        cout<<"this is parametrisec constructor"<<endl;
        this->rollNo = rollNo;
        this->age = age;
        this->nos = nos;
        this->name = name;
        this->gpa = new float(gpa);
    }
    ~Student(){
        cout<<"default destructor"<<endl;
        delete(gpa);
    }
};

int main(){
    Student S(11,23,4,"kumar",7.5);
}