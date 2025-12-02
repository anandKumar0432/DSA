#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    int height;
    node* left;
    node* right;

    node(){
        data = 0;
        height = 1;
        left = nullptr;
        right = nullptr;
    }

    node(int val){
        data = val;
        height = 1;
        left = nullptr;
        right = nullptr;
    }
};

int Height(node* root){
    if(root == nullptr){
        return 0;
    }
    int lHeight = Height(root->left);
    int rHeight = Height(root->right);
    return max(lHeight, rHeight) + 1;
}

node* rightRotation(node* root){
    if(root == nullptr){
        return nullptr;
    }
    node* x = root;
    node* y = root->left;
    node* t2 = y->right;
    y->right = x;
    x->left = t2;
    x->height = Height(x);
    y->height = Height(y);
    return y;
}
node* leftRotation(node* root){
    if(root == nullptr){
        return nullptr;
    }
    node* x = root;
    node* y = root->right;
    node* t2 = y->left;
    y->left = x;
    x->right = t2;
    x->height = Height(x);
    y->height = Height(y);
    return y;
}

int getBalanceFactor(node* root){
    if(root == nullptr){
        return 0;
    }
    int lHeight = root->left ? root->left->height : 0;
    int rHeight = root->right ? root->right->height : 0;
    return lHeight-rHeight;
}

node* insertNode(node* root, int val){
    if(root == nullptr){
        return new node(val);
    }
    if(root->data > val){
        root->left = insertNode(root->left, val);
    }else if(root->data < val){
        root->right = insertNode(root->right, val);
    }else {
        return root;
    }

    int bf = getBalanceFactor(root);
    root->height = Height(root);
    if(bf > 1){ // LL Rotation or LR rotation
        if(getBalanceFactor(root->left) >= 0){ // LL ROTATION  
           return rightRotation(root);
        }else{  // LR ROTATION
           root->left = leftRotation(root->left);
            return rightRotation(root);
        }
    }
    if(bf < -1){ // RR OR RL ROTATION
        if(getBalanceFactor(root->right) <= 0){
            return leftRotation(root);
        }else{
            root->right = rightRotation(root->right);
            return leftRotation(root);
        }
    }
    return root;
}

node* deleteNode(node* root, int val){
    if(root == nullptr){
        return nullptr;
    }

    if(root->data > val){
        
    }
}

void printTree(node* root){
    if(root == nullptr){
        return;
    }
    printTree(root->left);
    cout<<root->data<<" ";
    printTree(root->right);
}

int main(){
    node* root = nullptr;
    root = insertNode(root, 19);
    root = insertNode(root, 6);
    root = insertNode(root, 15);
    root = insertNode(root, 3);
    root = insertNode(root, 1);
    root = insertNode(root, 10);
    root = insertNode(root, 16);
    root = insertNode(root, 13);
    root = insertNode(root, 11);
    root = insertNode(root, 12);
    printTree(root);
    return 0;
}