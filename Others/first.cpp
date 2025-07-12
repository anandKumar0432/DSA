#include <iostream>
using namespace std;

int main()
{
    int x = 10; // variable declared
    int* myptr; // pointer variable

    myptr = &x;

    cout << "Value of x is: ";
    cout << x << endl;

    cout << "Address stored in myptr is: ";
    cout << myptr << endl;

    cout << "Value of x using *myptr is: ";
    cout << *myptr << endl;

    *myptr = 34;
    
    cout<<"value of x is : "<<x<<endl;

    cout<<"addresss : "<<myptr<<endl;

    cout<<"value of myptr : "<< *myptr<<endl;

    return 0;
}