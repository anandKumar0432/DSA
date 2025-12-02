#include<iostream> 
using namespace std;

class Stack{
    public:
    int data;
    int a[100];
    int top;

    Stack(){
        top = -1;
    }
    ~Stack(){
        top = -1;
    }

    int isEmpty(){
        if(top == -1){
            return 1;
        }else {
            return 0;
        }
    }
    void push(int val){
        if(top == 99){
            cout<<"stack overflow"<<endl;
            return;
        }else{
            top++;
            a[top] = val;
        }
    }
    int pop(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
            return -1;
        }else {
            top--;
            return a[top+1];
        }
    }
    void Top(){
        if(top == -1){
            cout<<"Stack is underflow"<<endl;
        }else {
            cout<<"top element is : "<<a[top]<<endl;
        }
    }

};

int main(){
    Stack st;
    st.push(13);
    st.push(17);
    st.push(16);
    st.push(15);
    st.push(14);
    int pop = st.pop();
    cout<<"popped element :"<<pop<<endl;
    cout<<"top is at"<<st.top<<endl;
    st.Top();
    return 0;
}