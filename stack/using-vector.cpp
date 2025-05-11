#include <iostream>
#include <vector>
#include <string>

using namespace std;

//create stack using vector
template<class T>
class Stack {
    vector<T> vec;
public:
    void push(T val) { //O(1)
        vec.push_back(val);
    }
    void pop() { //O(1)
        if(isEmpty()) {
            cout << "stack is empty. \n";
            return;
        }
        vec.pop_back();
    }
    
    T top() { //O(1)
        //  if(isEmpty()) {
        //     cout << "stack is empty. \n";
        //     return -1;
        // }
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty() {
        return vec.size() == 0;
    }
};

int main() {
    Stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while(!s.isEmpty()) {
        cout << s.top() << " ";
        return -1;
    }
    cout<<endl;
    return 0;
}