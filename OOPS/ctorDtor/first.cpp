#include<iostream>
using namespace std;


class student{
    //Attributes
    public: 

    int rollNo;
    int nos;
    int age;
    string name;

    // CONSTRUCTOR 

    student(){
        cout<<"default constructor"<<endl;
    }

    // PARAMETRISED CONTSTRUCTOR

    student(int rollNo, int nos, int age, string name){
        cout<<"parametrised constuctor called"<<endl;
        this->rollNo = rollNo;
        this->nos = nos;
        this->age = age;
        this->name = name;
    }

    // COPY CONSTRUCTOR

    student(const student &srcObj){
        cout<<"copy constuctor called"<<endl;
        this->rollNo = srcObj.rollNo;
        this->nos = srcObj.nos;
        this->age = srcObj.age;
        this->name = srcObj.name;
    }

    //METHOD/FUNCTION/BEHAVIOUR

    void sleep(){
        cout<<this->name<<" sleeping"<<endl;
    }
    void bunk(){
        cout<<this->name<<" bunking"<<endl;
    }

    ~student(){
        cout<<"defualt destructor"<<endl;
    }
};

int main(){

    // MEMORY ALLOCATION IN STACK 

    // student A;
    // A.name = "anand";
    // A.rollNo = 12;
    // A.age = 23;
    // A.nos = 3;
    // A.bunk();
    // student A(11,4,21,"anand");
    // A.bunk();
    // student B(11,6,23,"Rahul");
    // B.sleep();
    // B.bunk();

    // cout<<A.name<<endl;

    // // calling copy constructor (this copies whole object in a new object)
    // // student C = A; // Another method for calling copy constructor
    // student C(A); 
    // C.sleep();

    // DYNAMIC MEMORY ALLOCATION 

    student *A = new student(1,7,25,"kumar");
    cout<<A->name<<endl;
    A->bunk();
    delete(A);
    return 0;
}
