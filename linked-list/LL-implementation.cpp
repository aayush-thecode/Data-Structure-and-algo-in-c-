#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
    ~Node(){
     if(next != NULL) {
        cout << "~Node = " << data << endl;
        delete next;
        next = NULL;
     }  
    }
};

class List {
    Node* head;
    Node* tail;

public: 
    List() {
        head = NULL;
        tail = NULL;
    }

    ~List(){
        cout << "~List\n";
        if(head != NULL){
            delete head;
            head = NULL;
        }
    }

    void push_front(int val) {
        Node* newNode = new Node(val); //dynamic allocation
        // Node* newNode(val); // static

        if(head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head; //newNode.next
            head = newNode;
        }
    }

    void push_back(int val) {
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void printList(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp ->next;
        }
        cout << "NULL" << "\n";
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i = 0; i<pos-1; i++){
            if(temp == NULL){
                cout << "Position is INVALID\n";
                return;
            }
            temp = temp->next;
        }
        //temp is now at pos-1 i.e. prev/left
        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front() {
        if(head == NULL){
            cout << "LL is empty\n";
            return;
        }

        Node* temp = head;
        head = head->next;

        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;

        while(temp->next->next != NULL){
            temp = temp->next;
        }

        temp->next = NULL; //temp = tail's prev
        delete tail;
        tail = temp;
    }

    int searchItr(int key){
        Node* temp = head;
        int idx = 0;

        while(temp !=NULL){
            if(temp-> data ==key){
                return idx;
            }

            temp = temp->next;
            idx++;
        }
        return -1;
    }

    int helper(Node* h, int key){

        if(h == NULL){
            return -1;
        }

        if(h->data == key){
            return 0;
        }

        int idx = helper(h->next,key);
        if(idx == -1){
            return -1;
        }
        return idx +1;
    }

    int searchRec(int key){
        return helper(head, key);
    }

    void reverse(){
        Node* curr = head;
        Node* prev = NULL;

        while(curr !=NULL){
            Node* next = curr->next;
            curr->next = prev;

            //updations for next itr
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.printList(); // 1->2->3->NULL

    ll.push_back(4);
    ll.push_back(5);
    ll.printList(); // 1->2->3->4->5->NULL

    ll.insert(100,2);
    ll.printList(); // 1->2->100->3->4->5->NULL

    ll.pop_front();
    ll.printList();

    ll.pop_back();
    ll.printList();

    cout<< ll.searchItr(2) << endl;
    cout << ll.searchRec(3) << endl;

    ll.reverse();
    ll.printList();

    return 0;
}