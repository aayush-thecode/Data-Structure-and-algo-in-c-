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

int height(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int leftHt = height(root->left);
    int rightHt = height(root->right);

    int currHt = max(leftHt, rightHt) + 1;
    return currHt;
}

int diam1(Node* root) {
    if(root == NULL) {
        return 0;
    }

    int currDiam = height(root->left) + height(root->right) + 1;
    int leftDiam = diam1(root->left);
    int rightDiam = diam1(root->right);

    return max(currDiam, max(leftDiam, rightDiam)) ;
}

pair<int, int> diam2(Node* root) { // O(n)
    //basecase
    if(root == NULL) {
        return make_pair(0, 0);
    }


    pair<int, int> leftInfo = diam2(root->left); //LD, LH
    pair<int, int> rightInfo = diam2(root->right); // RD, RH;

    int currDiam = leftInfo.second + rightInfo.second + 1;
    int finalDiam = max(currDiam, max(leftInfo.first, rightInfo.first));
    int finalHeight = max(leftInfo.second, rightInfo.second) + 1;

    return make_pair(finalDiam, finalHeight);
}

int main() {
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = 0;
    Node* root = buildTree(nodes, idx);

    cout << "diameter : " << diam1(root) << endl;

    cout << "diameter : " << diam2(root).first << endl;


    return 0;
}