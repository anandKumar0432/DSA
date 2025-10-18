#include<iostream>
using namespace std;

class Node{
    public:
    int val;
    Node* next;

    Node(){
        val = 0;
        next = NULL;
    }

};

class MyStack{
    public:
    Node* top;
    MyStack(){
        top = NULL;
    }

    void push(int v){
        Node* temp = new Node();
        temp->val = v;
        temp->next = top;
        top = temp;
    }

    int pop(){
        Node* temp = top;
        if(top == NULL){
            cout<<"stack is empty "<<endl;
            return -1;
        }
        top = top->next;
        int val = temp->val;
        delete temp;
        return val;
    }
    
    void print(){
        Node* temp = top;
        while(temp){
            cout<<temp->val<<"-->";
            temp = temp->next;
        }

        cout<<endl;
    }
};

int main(){
    MyStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.print();
    st.pop();
    st.pop();
    st.print();

    return 0;
}