#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

void printArr(vector<int> vec) {
    for(int i = 0; i<vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

int maxAreaHistogram(vector<int> height) {
    int n = height.size();
    vector <int> nsl(n);
    vector <int> nsr(n);
    stack<int> s;

    //next smaller left
    nsl[0] = -1;
    s.push(0);
    for(int i = 1; i <height.size(); i++){
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }

        if(s.empty()) {
            nsl[i] = -1;
        } else {
            nsl[i] = s.top();
        }
        s.push(i);
    }

    printArr(nsl);

    while(!s.empty()) {
        s.pop();
    }
    //next smaller right
    s.push(n-1);
    nsr[n-1] = n;
    for(int i = n-1; i >= 0; i--) {
        int curr = height[i];
        while(!s.empty() && curr <= height[s.top()]) {
            s.pop();
        }
        if(s.empty()) {
            nsr[i] = n; //-1
        } else {
            nsr[i] = s.top();
        }
        s.push(i);
    }

    int maxArea = 0;
    for(int i = 0; i<n; i++) {
        int ht = height[i];
        int width = nsr[i] - nsl[i] - 1;
        int area = ht * width;

        maxArea = max(area, maxArea);
    }
    cout << "max area of histogram : "<< maxArea << endl;
}

int main() {
    vector<int> height = {2, 1, 5, 6, 2, 3};
    maxAreaHistogram(height);

    return 0;
}