#include <iostream>
#include <stack>
#include <string>
using namespace std;

void pushAtBottom(stack<int> &s, int val) {
    if(s.empty()){
        s.push(val); // push at top = push at bottom
        return;
    }

    int temp = s.top();
    s.pop();
    pushAtBottom(s,val);
    s.push(temp);

};

string reverseString(string str) {
    string ans;
    stack<char> s;

    for(int i = 0; i<str.size(); i++){
        s.push(str[i]);
    }
    while(!s.empty()){
        char top = s.top();
        ans += top;
        s.pop();
    }
    return ans;
};

void reverse(stack<int> &s) {
    if(s.empty()) {
        return;
    }

    int temp = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s, temp);
}

void printStack(stack<int> s) {
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main() {
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);
    
    // pushAtBottom(s,4);

    // while(!s.empty()) {
    //     cout << s.top()<< " ";
    //     s.pop();
    // }
    // cout<< endl;

    // string str = "abcd";
    // cout << "reverse = " <<reverseString(str) << endl;

    printStack(s);
    reverse(s);
    printStack(s);
    return 0;
}