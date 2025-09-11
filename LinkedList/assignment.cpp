#include<iostream>
#include<vector>
using namespace std;

class node{
    public: 
    int value;
    node* next;
    node(){
        this->value = 0;
        this->next = NULL;
    }
};

class linkedlist{
    public:
    node* head;

    linkedlist(){
        head = NULL;
    }
    
    void insert(int v){
        node* temp = new node();
        temp->value = v;

        if(head == NULL){
            head = temp;
        }else{
            node*t = head;
            while(t->next !=NULL){
                t = t->next;
            }
            t->next = temp;
        }
    }

    void printll(){
        node* temp ;
        temp = head;
        while(temp != NULL){
            cout<<temp->value<<"-->";
            temp= temp->next;
        }
    }

    void search(int v){
        node* temp;
        temp = head;
        cout<<endl;
        while(temp != NULL){
            if(temp->value == v){
                cout<<"element is found "<<endl;
            }
            temp=temp->next;
        }
    }

    void removeDuplicate(){
        if(head == NULL){
            cout<<"List is empty"<<endl;
            return;
        }else if(head->next == NULL){
            cout<<"link has no duplicates b/c it has only elements"<<endl;
        }else{
            node* temp = head;
            while(temp->next!=NULL){
                if(temp->value == temp->next->value){
                    node* dup = temp->next;
                    temp->next = dup->next;
                    delete dup;
                }else{
                    temp = temp->next;
                }
            }
        }
    }

    void swapLL(){
        node* temp = head;
        if(head ==  NULL){
            cout<<"This can't be swapped"<<endl;
            return ;
        }
        
        while(temp != NULL && temp->next != NULL){
            int tval = temp->value;
            temp->value = temp->next->value;
            temp->next->value = tval;
            temp = temp->next->next;
        }
    }

    void moveLastToFront(){
        node * temp = head;
        if(head == NULL && head->next == NULL){
            cout<<"list is empty or it has only elements"<<endl;
            return;
        }

        while(temp->next != NULL){
            temp = temp->next;
        }
        int tval = head->value;
        head->value = temp->value;
        temp->value = tval;
    }

    int countOccurence(int key){
        node* temp = head;
        int count = 0;
        if(head == NULL){
            cout<<"ll is empty"<<endl;
            return -1;
        }
        while(temp != NULL){
            if(temp->value == key){
                count++;
            }
            temp = temp->next;
        }
        return count;
    }

    void nthFromLast(int n){
        node* temp = head;
        if(head == NULL){
            cout<<"ll is empty";
            return;
        }
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        int end = count - n + 1;
        if (count < n){
            cout<<"enter a valid index "<<endl;
            return;
        }
        temp = head;
        while(temp != NULL && end > 1){
            temp = temp->next;
            end--;
        }
        cout<<"value is : "<<temp->value;
    }

    void findMiddle(){
        node* temp = head;
        if(head == NULL){
            cout<<"ll is empty"<<endl;
            return;
        }
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        temp = head;
        int middle = count/2 + 1;
        while(temp!=NULL && middle > 1){
            temp=temp->next;
            middle--;
        }
        cout<<"middle element is : "<<temp->value<<endl;
    }

    
};

int main(){
    linkedlist ll;
    ll.insert(16);
    ll.insert(15);
    ll.insert(14);
    // ll.insert(14);
    // ll.insert(14);
    // ll.insert(14);
    ll.insert(13);
    ll.insert(11);
    ll.insert(11);
    ll.printll();
    cout<<endl;
    // ll.nthFromLast(10);
    ll.findMiddle();
    // ll.removeDuplicate();
    // ll.swapLL();
    // ll.moveLastToFront();
    // int count = ll.countOccurence(200);
    // cout<<"no. of occ : "<<count<<endl;
    // ll.printll();

    // ll.search(13);
    return 0;
}