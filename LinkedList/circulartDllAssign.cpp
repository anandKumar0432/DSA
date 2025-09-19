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

    //Given a sorted circular doubly linked list of distinct nodes(no two nodes have the
    // same data) and a value x. Count triplets in the list that sum up to a given value x.

    // void countTriplets(int x){

    // }

    //Given a circular singly linked list containing N nodes, the task is to delete all the odd
    // nodes from the list
    void deletOddNodes(){
        node* temp = head;
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

void isIdentical(circularDll l1, circularDll l2){
    node* temp1 = l1.head;
    node* temp2 = l2.head;

    if(temp1 == NULL ){
        cout<<"list is empty !"<<endl;
        return ;
    }
    while(temp1->next != l1.head && temp2->next != l2.head){
        if(!(temp1->val == temp2->val)){
            cout<<"list is not identical !"<<endl;
            return;
        }

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(!(temp1->val == temp2->val)){
        cout<<"list is not identical !"<<endl;
        return;
    }
    cout<<"list is identical "<<endl;
}


int main(){
    circularDll cll;
    cll.insert(10);
    cll.insert(11);
    cll.insert(12);
    cll.insert(13);
    cll.insert(14);
    cll.insert(15);
    // cll.printCll();
    // cll.deleteNode(1);
    cll.printCll();

    circularDll cll2;
    cll2.insert(10);
    cll2.insert(11);
    cll2.insert(12);
    cll2.insert(13);
    cll2.insert(14);
    cll2.insert(15);
    cll2.printCll();

    isIdentical(cll, cll2);

    return 0;
}