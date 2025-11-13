#include<iostream>
using namespace std;

class Node{
    public:
    Node* left;
    Node* right;
    int data;

    Node(){
        left = nullptr;
        right = nullptr;
        data = 0;
    }
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }

    Node* insert(int val){
        if(data > val){
            if(left == nullptr){
                left = new Node(val);
            }else{
                left->insert(val);
            }
        }else{
            if(right == nullptr){
                right = new Node(val);
            }else{
                right->insert(val);
            }
        }
        return this;
    }

    void inorder(){
        if(left){
            left->inorder();
        }
        cout<<data<<" ";
        if(right){
            right->inorder();
        }
    }

    int minElement(){
        if(left){
            left->minElement();
        }
        return data;
    }

    Node* delete_node(int val){
        if(val > data){
            right = right->delete_node(val);
        }else if(val < data){
            left = left->delete_node(val);
        }else{
            if(left == nullptr && right == nullptr){
                delete this;
                return nullptr;
            }else if(left == nullptr){
                Node* temp = right;
                delete this;
                return temp;
            }else if(right == nullptr){
                Node* temp = left;
                delete this;
                return temp;
            }else{
                int temp = right->minElement();
                data = temp;
                right = right->delete_node(temp);
            }
        }
        return this;
    }
};

int main(){
    Node* b = new Node(10);
    b->insert(23);
    b->insert(12);
    b->insert(20);
    b->insert(32);
    b->insert(8);
    b->insert(50);
    b->insert(2);
    b->insert(22);
    b->insert(1);
    b->inorder();
    cout<<endl;
    b->delete_node(23);
    b->inorder();
    return 0;
}