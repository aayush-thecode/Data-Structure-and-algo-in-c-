//friend class and function class 

#include <iostream>
#include <string>
using namespace std;

class A {
    string secret = "secret data";
};

class B{
    public:
        void showSecret(A &obj){
            
        }
};

int main() {

    return 0;
}