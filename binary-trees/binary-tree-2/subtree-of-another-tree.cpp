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

bool isIdentical(Node* root1, Node* root2 ) {
    //base case
    if(root1 == NULL && root2 == NULL) {
        return true;
    } else if(root1 == NULL || root2 == NULL) {
        return false;
    }

    if(root1->data != root2->data) {
        return false;
    }

    return isIdentical(root1->left, root2->left) && isIdentical(root1->right, root2->right);
}

bool isSubtree(Node* root, Node* subRoot) {
    //base case
    if(root == NULL && subRoot == NULL) {
        return true;
    } else if(root == NULL || subRoot == NULL) {
        return false;
    }

    if(root->data == subRoot->data) {
        //identical for subtree
        if(isIdentical(root, subRoot)) {
            return true;
        }
    }

    int isLeftSubtree = isSubtree(root->left, subRoot);
    if(!isLeftSubtree) {
        return isSubtree(root->right, subRoot);
    }
    return true;
}

int main() {
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = 0;

    Node* root = buildTree(nodes, idx);
    Node* subRoot = new Node(2);
    subRoot->left = new Node(4);
    subRoot->right = new Node(5);

    cout << isSubtree(root, subRoot) << endl;
    return 0;
}