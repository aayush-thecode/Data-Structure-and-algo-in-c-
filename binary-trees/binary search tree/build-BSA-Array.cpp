#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

Node* insert(Node* root, int val) { //O(logn)
    if(root == NULL) {
        root = new Node(val);
        return root;
    }

    if(val < root->data) { // left-subtree
        root->left = insert(root->left, val);
    } else { // right sub-tree
        root->right = insert(root->right, val);
    }
    return root;
}

Node* buildBST(int arr[], int n) {
    Node* root = NULL;

    for(int i = 0; i<n; i++) {
        root = insert(root, arr[i]);
    }
    return root;
}

void inOrder(Node* root) {
    if(root == NULL) {
        return;
    }
    
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

bool search(Node* root,int key) { //O(height); avg )(logn)
    if(root == NULL) {
        return false;
    }

    if(root->data == key) { // found
        return true;
    }

    if(root->data > key) { //left subtree
        return search(root->left, key);
    } else {
        return search(root->right, key); //right subtree
    }
}

int main() {
    int arr[6] = {5, 1, 3, 4, 2, 7};
    // int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    
    Node* root = buildBST(arr, 6);
    inOrder(root);
    cout << endl;

    cout << search(root, 15) << endl;
    return 0;
}