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

class circularDll{
    public:
    node* head = NULL;

    void insert(int v){
        node* temp = new node();
        temp->val = v;

        if(head == NULL){
            head = temp;
            head->next = temp;
            head->prev = temp;
            return;
        }
        node* t = head;
        while(t->next != head){
            t = t->next;
        }

        temp->prev = t;
        t->next = temp;
        temp->next = head;
        head->prev = temp;
    }

    void deleteNode(int N){
        node* temp = head;
        if(head == NULL){
            cout<<"list is empty !"<<endl;
        }

        if(N == 1){
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            head = temp->next;
            delete temp;
        } else {
            while(temp->next != head && N != 1){
                temp = temp->next;
                N--;
            }

            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
            delete temp;
        }
    }

    void printCll(){
        node* temp = head;

        while(temp->next != head){
            cout<<temp->val<<"<-->";
            temp = temp->next;
        }
        cout<<temp->val<<endl;
    }

};

int main(){
    circularDll cll;
    cll.insert(10);
    cll.insert(11);
    cll.insert(12);
    cll.insert(13);
    cll.insert(14);
    cll.insert(15);
    cll.printCll();
    cll.deleteNode(1);
    cll.printCll();

    return 0;
}