#include<iostream>
#include<cstdlib>
using namespace std;
class node
{
   public:
   int value;
   node*next;
   node()
   {
    this->value=0;
    this->next=NULL;
   }
};
class linkedlist
{
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
            node* t = head;
            while(t->next != NULL){
                t = t->next;
            }
            t->next = temp;
        }
     }

     void print(){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->value<<" ";
            temp = temp->next;
        }
     }
};
int main(){
  linkedlist ll;
  ll.insert(10);
  ll.insert(20);
  ll.insert(30);
  ll.insert(40);
  ll.insert(50);
  ll.print(); 
  return 0;
}