#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void printList(list<int> ll) {
    list<int>::iterator itr;
    for(itr = ll.begin(); itr != ll.end(); itr++) {
        cout << (*itr) << " -> ";
    }
    cout << "Null" <<endl;
}

int main(){
    list<int> ll; // vector <int> arr

    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);

    printList(ll);
    cout << ll.size() << endl;

    cout << "head = " << ll.front() << "\n";
    cout << "tail = " << ll.back() << "\n";

    ll.pop_front();
    printList(ll);

    return 0;
}