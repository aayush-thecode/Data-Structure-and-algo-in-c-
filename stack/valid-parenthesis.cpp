#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string str) {
    stack<char> s;

    for(int i = 0; i < str.size(); i++) {
        char ch = str[i];

        if(ch =='(' || ch == '[' || ch == '{') {
            s.push(ch);
        }else { //closing
            if(s.empty()) {
                return false;
            }

            //match
            char top = s.top();
            if((top == '(' && ch == ')') ||
            (top == '{' && ch == '}')||
            (top == '[' && ch == ']')) {
                s.pop();
            } else {
                return false;
            }
        }
    }
    return s.empty();
}

bool isDuplicate(string str) {
    stack<char> s;

    for(int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if(ch != ')') { //non-closing
            s.push(ch);
        } else {
            if(s.top() == '(') { //dupliate
                return true;
            }
            
            while(s.top() != '(') {
                s.pop();
            }
            s.pop();
        }
    }
    return false;
}


int main() {
    // string str1 = "([}])"; //invalid: false
    // string str2 = "([{}])"; //valid: true

    string str1 = "((a+b))"; // invalid : true
    string str2 = "((a+b) + (c+d))"; //valid : 1

    cout << isDuplicate(str1) << endl;
    cout << isDuplicate(str2) << endl;

    return 0;
}