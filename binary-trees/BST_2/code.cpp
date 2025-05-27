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

Node* buildBSTfromSorted(int arr[], int st, int end) {
    if(st > end) {
        return NULL;
    }

    int mid = st + (end-st) /2;
    Node*curr = new Node(arr[mid]);

    curr->left = buildBSTfromSorted(arr, st, mid - 1);
    curr->right = buildBSTfromSorted(arr, mid+1, end);

    return curr;
}

void preorder(Node* root) {
    if(root == NULL) {
        return; 
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
};

Node* buildBSTfromSortedVector(vector<int> arr, int st, int end) {
    if(st > end) {
        return NULL;
    }

    int mid = st + (end-st) /2;
    Node*curr = new Node(arr[mid]);

    curr->left = buildBSTfromSortedVector(arr, st, mid - 1);
    curr->right = buildBSTfromSortedVector(arr, mid+1, end);

    return curr;
}

void getInorder(Node* root, vector<int> &nodes) {
    if(root == NULL) {
        return;
    }

    getInorder(root->left, nodes);
    nodes.push_back(root->data);
    getInorder(root->right, nodes);
}

Node* balancedBst(Node* root) {
    //get inorder seq
    vector<int> nodes;

    getInorder(root, nodes);

    return buildBSTfromSortedVector(nodes, 0, nodes.size() - 1);
    
}

int main() {
    // int arr[7] = {3, 4, 5, 6, 7, 8, 9};

    // Node* root = buildBSTfromSorted(arr, 0, 6);
    // preorder(root);
    // cout << endl;

    Node* root =  new Node(6);
    root->left = new Node(5);
    root->left->left = new Node(4);
    root->left->left->left = new Node(3);

    root->right = new Node(7);
    root->right->right = new Node(8);
    root->right->right->right = new Node(9);

    root = balancedBst(root);
    preorder(root);
    cout << endl;
    return 0;
}