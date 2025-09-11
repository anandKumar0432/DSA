#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;
    node* prev;
    
    node(){
        val = 0;
        next = NULL;
        prev = NULL;
    }
};

class doublyll{
    node* head;
    public:
    doublyll(){
        head = NULL;
    }

    void insert(int v){
        node* temp = new node();
        temp->val = v;
        if(head == NULL){
            head = temp;
        }else{
            node* t;
            t = head;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = temp;
            temp->prev = t;
        }
    }

    void inserAtHead(int v){
        
    }

    void printdll(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"-->";
            temp = temp->next;
        }
    }
};

int main(){
    doublyll dll;
    dll.insert(1);
    dll.insert(11);
    dll.insert(12);
    dll.insert(13);
    dll.insert(14);
    dll.insert(15);
    dll.insert(16);
    dll.insert(17);
    dll.printdll();
    return 0;
}