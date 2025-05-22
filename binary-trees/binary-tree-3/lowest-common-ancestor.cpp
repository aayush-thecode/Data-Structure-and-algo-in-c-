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
};

bool rootToNodePath(Node* root, int n, vector<int> &path) { //O(n)
    if(root == NULL) {
        return false;
    }

    path.push_back(root->data);
    if(root->data == n) {
        return true;
    }

    int isLeft = rootToNodePath(root->left, n, path);
    int isRight = rootToNodePath(root->right, n, path);

    if(isLeft || isRight) {
        return true;
    }

    path.pop_back();
    return false;
}

int LCA(Node* root, int n1, int n2) {
    vector<int> path1;
    vector<int> path2;

    rootToNodePath(root, n1, path1);
    rootToNodePath(root, n2, path2);

    int lca = -1;
    for(int i = 0, j = 0; i<path1.size() && j<path2.size(); i++, j++) {
        if(path1[i] != path2[j]) {
            return lca;
        }
        lca = path1[i];
    }
    return lca;
}

Node* LCA2(Node* root, int n1, int n2) { //O(n) SC O(1)
    if(root == NULL) {
        return NULL;
    }

    if(root->data == n1 || root->data == n2) {
        return root;
    }

    Node* leftLCA = LCA2(root->left, n1, n2);
    Node* rightLCA = LCA2(root->right, n1, n2);

    if(leftLCA != NULL && rightLCA != NULL) {
        return root;
    }

    return leftLCA == NULL ? rightLCA : leftLCA;
};

int dist(Node* root, int n) {
    if(root == NULL) {
        return -1;
    }

    if(root->data == n) {
        return 0;
    }

    int leftDist = dist(root->left, n);
    if(leftDist != -1) {
        return leftDist + 1;
    }

    int rightDist = dist(root->right, n); 
        if(rightDist != -1) {
            return rightDist + 1;
        }

    dist(root->left, n);
}

int minDist(Node* root, int n1, int n2) {
    Node* lca = LCA2(root, n1, n2);

    int dist1 = dist(lca, n1);
    int dist2 = dist(lca, n2);

    return dist1 + dist2;
}

int main() {
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = 0;
    Node* root = buildTree(nodes, idx);

    // int n1 = 4, n2 = 5; // lca = 2

    // cout << "Lowest common ancestor : " << LCA(root, n1, n2);

    int n1 = 4, n2 = 6; // lca = 2

    cout << "Lowest common ancestor 2 : " << LCA2(root, n1, n2)->data << endl;

    cout << "min distance : " << minDist(root, n1, n2) << endl;

    return 0;
}