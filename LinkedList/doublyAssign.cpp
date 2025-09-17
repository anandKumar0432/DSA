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

    void rotateList(int k){
        node* temp = head;
        if(head == NULL){
            cout<<"list is empty !"<<endl;
            return;
        }

        while(temp->next != NULL){
            temp = temp->next;
        }
        head->prev = temp;
        temp->next = head;
        node* t = head;
        while(t->next != head && k != 0){
            t = t->next;
            k--;
        }
        t->prev->next = NULL;
        t->prev = NULL;
        head = t;
    }

    bool isDigitSumEven(int num){
        int sum = 0;
        while(num != 0){
            sum = sum + num % 10;
            num = num/10;
        }
        if(sum % 2 == 0){
            return true;
        }
        return false;
    }

    

    void removeSumEven(){
        node * temp = head;
        if(head == NULL){
            cout<<"list is empty !"<<endl;
            return;
        }
        while(temp != NULL){
            if(isDigitSumEven(temp->val)){
                if(temp == head){
                    head = temp->next;
                    delete temp;
                    temp = head;
                }else if(temp->next == NULL){
                    node* t = temp->prev;
                    t->next = NULL;
                    delete temp;
                    temp = t;
                }else{
                    node* t = temp->prev;
                    t->next = temp->next;
                    temp->next->prev = t;
                    delete temp;
                    temp = t;
                }
            }
            temp = temp->next;
        }
    }

    void reverselist(){
        node* temp = head;
        if(head == NULL){
            cout<<"list is empty !"<<endl;
            return ;
        }
        node* t = NULL;
        cout<<"temp :"<<temp<<endl;
        while(temp != NULL){
            t = temp->prev;
            temp->prev = temp->next;
            temp->next = t;
            temp = temp->prev;
        } 
        head = t->prev;
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
    dll.insertAtEnd(16);
    dll.insertAtEnd(18);
    dll.insertAtEnd(19);
    dll.insertAtEnd(19);
    dll.printdll();
    // dll.printPair(7);
    // dll.inserInSortedList(9);
    // dll.inserInSortedList(5);
    // dll.removeDuplicates();
    // dll.rotateList(3);
    // dll.reverselist();
    dll.removeSumEven();
    dll.printdll();
    return 0;
}   