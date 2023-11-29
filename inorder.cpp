#include<bits/stdc++.h>

using namespace std;


struct Node{
    int data;

    struct Node* left;

    struct Node* right;


    Node(int val){
        data = val;
        left = right = NULL;
    }
};


void inorder(Node* root){

    if(root == NULL) return;

    inorder(root->left);
    cout<< root->data;

    inorder(root->right);
}


int main(){

    struct Node* root = new Node(10);
    root->left = new Node(12);

    root -> right = new Node(13);

      inorder(root);

}