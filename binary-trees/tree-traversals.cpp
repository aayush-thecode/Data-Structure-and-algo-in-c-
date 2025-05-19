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

Node* buildTree(vector<int>& nodes, int& idx) {
    if (idx >= nodes.size() || nodes[idx] == -1) {
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    idx++;
    currNode->left = buildTree(nodes, idx);
    idx++;
    currNode->right = buildTree(nodes, idx);

    return currNode;
}

//pre-order traversals
void preorder(Node* root) {
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
};

//inorder traversals
void inorder(Node* root) {
    if(root == NULL) {
        return;
    }

    //left
    inorder(root->left);
    //root
    cout << root->data << " ";
    //right
    inorder(root->right);
}

int main() {
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = 0;
    Node* root = buildTree(nodes, idx);

    preorder(root);
    cout << endl;

    inorder(root);
    cout << endl;
    return 0;
}