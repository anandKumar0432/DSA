#include <bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data){
        val = data;
        left = nullptr;
        right = nullptr;
    }
};

int height(TreeNode* root){

    if(root == nullptr){
        return 0;
    }
    int lHeight = height(root->left);
    int rHeight = height(root->right);
    return max(lHeight, rHeight) + 1;
}

void print_level_order(TreeNode* root, int level){
    if(root == nullptr){
        return;
    }
    if(level == 0){
        cout<<root->val<<" ";
    }else{
        print_level_order(root->left, level-1);
        print_level_order(root->right, level-1);
    }
}

void level_order(TreeNode* root){
    int h = height(root);
    for(int i = 0; i<h ; i++){
        print_level_order(root, i);
    }
}

int main(){

    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(11);
    root->right = new TreeNode(31);
    root->left->left = new TreeNode(13);
    root->left->right = new TreeNode(15);
    root->left->left->left = new TreeNode(50);
    root->left->left->right = new TreeNode(30);
    root->left->right->left = new TreeNode(30);
    root->left->right->right = new TreeNode(30);
    root->right->left = new TreeNode(44);
    root->right->left->right = new TreeNode(88);
    level_order(root);
    return 0;
}