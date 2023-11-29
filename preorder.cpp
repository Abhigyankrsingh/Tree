#include <iostream>
using namespace std;

struct Node {
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

void preorder(Node *root) {
    if (root == NULL) 
        return;

    cout << root->data << " "; // Print the data of the current node
    preorder(root->left);      // Visit left subtree
    preorder(root->right);     // Visit right subtree
}

int main() {
    struct Node *root = new Node(12);
    root->left = new Node(3);
    root->right = new Node(34);
    root->left->right = new Node(355);

    // Printing the values using pre-order traversal
    cout << "Pre-order traversal: ";
    preorder(root);

    return 0;
}
