#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* prev;
    node* next;

    node(){
        val = 0;
        prev = NULL;
        next = NULL;
    }
};

class doublyLL{
    public:
    node* head;
    doublyLL(){
        head = NULL;
    }

    void insertAtEnd(int v){
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

    void printPair(int k){
        node* temp = head;
        node* t;
        while(temp->next != NULL){
            t = temp->next;
            while(t != NULL){
                if(t->val + temp->val == k){
                    cout<<temp->val<<" , "<<t->val<<endl;
                    break;
                }
                t = t->next;
            }
            temp = temp->next;
        }
        
    }

    void inserInSortedList(int v){
        node* temp = new node();
        temp->val = v;
        if(head == NULL){
            head = temp;
            return;
        }
        node* t = head;
        while(t->val <= v && t->next != NULL){
            t = t->next;
        }
        node* t2;
        t2 = t->prev;
        t2->next = temp;
        temp->prev = t2;
        temp->next = t;
        t->prev = temp;
    }

    void removeDuplicates(){
        node* temp = head;
        if(head == NULL){
            cout<<"list is empty !"<<endl;
            return ;
        }
        while(temp->next != NULL){
            if(temp->val == temp->next->val){
                if(temp->next->next == NULL){
                    node* t = temp->next;
                    temp->next = NULL;
                    delete t;
                }else{
                    node* t = temp->next;
                    temp->next = t->next;
                    t->next->prev = temp;
                    delete t;
                }
            }else{
                temp = temp->next;
            }
        }
    }

    void printdll(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->val<<"<-->";
            temp = temp->next;
        }
        cout<<endl;
    }
};


int main(){
    doublyLL dll;
    dll.insertAtEnd(1);
    dll.insertAtEnd(2);
    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.insertAtEnd(5);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.insertAtEnd(8);
    dll.insertAtEnd(9);
    dll.insertAtEnd(9);
    dll.printdll();
    // dll.printPair(7);
    // dll.inserInSortedList(9);
    // dll.inserInSortedList(5);
    dll.removeDuplicates();
    dll.printdll();
    return 0;
}   