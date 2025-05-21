#include <iostream>
#include <queue>
#include <vector>
#include <map>
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

void topView(Node* root) {
    queue<pair<Node*, int>> Q; // (node,HD)
    map<int, int> m; // (HD, node->data)

    Q.push(make_pair(root, 0));
    while(!Q.empty()) {
        pair<Node*, int> curr = Q.front();
        Q.pop();

        Node* currNode = curr.first;
        int currHD = curr.second;

        if(m.count(currHD) == 0) { // HD is unique -> add in map
            m[currHD] = currNode->data;
        }

        if(currNode->left != NULL) {
            pair<Node*, int> left = make_pair(currNode->left, currHD - 1);
            Q.push(left);
        }

        if(currNode->right != NULL) {
            pair<Node*, int> right = make_pair(currNode->right, currHD + 1);
            Q.push(right);
        }
    }
    for(auto it : m) {
        cout << it.second << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    int idx = 0;
    Node* root = buildTree(nodes, idx);

    topView(root);

    return 0;
}