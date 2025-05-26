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

Node* getInorderSuccessor(Node* root) {
    while(root->left != NULL){
        root = root->left;
    }
    return root; //IS
}

Node* delNode(Node* root, int val) {
    if(root == NULL) {
        return NULL;
    }

    if(val < root->data) { // left subtree
        root->left = delNode(root->left, val);
    } else if(val > root->data) { // right subtree
        root->right = delNode(root->right, val);
    } else {
        //root == va;
        //case1 : 0 children
        if(root->left == NULL && root->right == NULL) {
            delete root;
            return NULL;
        }

        //case 2 : 1 chile
        if(root->left == NULL ||  root->right == NULL) {
            return root->left == NULL ? root->right : root->left; 
        }

        //case 3 : 2 children
        Node* IS = getInorderSuccessor(root->right);
        root->data = IS->data;
        root->right = delNode(root->right, IS->data); //case 1, case2
        return root;
    }
    return root;
}

void printInRange(Node* root, int start, int end) {
    if(root == NULL) {
        return;
    }

    if(start <= root->data && root->data <= end) { //case 1
        printInRange(root->left, start, end);
        cout << root->data << " ";
        printInRange(root->right, start, end);
    } else if(root->data < start) { // case 2
        printInRange(root->right, start, end);
    } else{
        printInRange(root->left, start, end);
    }
};

int main() {
    // int arr[6] = {5, 1, 3, 4, 2, 7};
    int arr[9] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
    
    Node* root = buildBST(arr, 9);
    
    inOrder(root);
    cout<< endl;

    // delNode(root, 10);
    // inOrder(root);
    // cout << endl;

    printInRange(root, 5, 12);
    // inOrder(root);
    return 0;
};