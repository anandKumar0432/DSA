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
    int value=0;
    next=NULL;
   }
};
class linkedlist
{
     node*head;
     public:
     linkedlist()
     {
        head=NULL;//node *head=new node();
     }
     void insert(int v){
         node*temp=new node();
         temp->value=v;
      if(head==NULL){
         head=temp;
      }
      else{
        node *t=head;
        while(t->next!=NULL){
          t=t->next;
         }
         t->next=temp;
      }
     }
    
    void prinfunction(){
      node*t=head;
      while(t!=NULL){
        cout<<t->value<<"->";
         t=t->next;
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
  ll.prinfunction();
  return 0;
}