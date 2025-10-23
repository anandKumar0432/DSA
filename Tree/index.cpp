#include<bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int a[100]={0};
    int size=100;
    void insert(int v,int i){
        if(i==1){
            a[i]=v;
        }
        else if((a[i/2]!=0) && (i<size)){ //i less than size honi chahiye or uska parent exist krni chahiye.
            a[i]=v;
        }
        else{
            cout<<"parent does not exist"<<endl;
        }
    }
    void insertLeftchild(int v,int i){
        if(a[i]!=0){//jiske left child me insert krna hai to pahle check kro ki node exist kr rha hai ya nhi .
            a[2*i]=v;
        }
        else{
            cout<<"parent does not exist"<<endl; 
        }
    }
    void insertRightchild(int v,int i){
        if(a[i]!=0 && (2*i+1)<size){//jiske right child me insert krna hai to pahle check kro ki node exist kr rha hai ya nhi .
            a[2*i+1]=v;
        }
        else{
            cout<<"parent does not exist or overflow"<<endl; 
        }
    }

   void deletenode(int i){
        if(a[i]!=0 && a[2*i]==0 && a[2*i+1]==0){
            a[i]=0;
        }
        else{
            cout<<"not able to delete"<<endl;
        }
    }
    void print(){
        int i;
        for(i=1;i<size;i++){
            if(a[i]!=0){
              cout<<a[i]<<" ";
             }
            else{
                cout<<" - ";
            }
        }
    }
};
int main(){
  Tree t;
  t.insert(5,1);
  t.insert(10,2);
  t.insert(20,5);
  t.insert(30,10);
  t.insert(40,21);
  t.print();
  
  return 0;
}