// // operator overloading

// #include <iostream>
// using namespace std;

// class Complex {
//     private:
//     int real;
//     int img;

//     public:
//     Complex(int r, int i){
//         real = r;
//         img = i;
//     }

//     void showNum(){
//         cout << real << " - " << img << "i \n";
//     }

//     Complex operator - (Complex &c2) {
//         int resReal = this->real - c2.real;
//         int resImg = this->img - c2.img;
//         Complex c3(resReal, resImg);
//         return c3;
//     }
// };

// int main() {
//     Complex c1(1, 2);
//     Complex c2(3, 4);

//     c1.showNum();
//     c2.showNum();

//     Complex c3 = c1-c2;
//     c3.showNum();

//     return 0;
// }

//runtime polimorphism

#include <iostream>
using namespace std;

class Parent {
public:
    void show(){
        cout << "parent class show...";
    }
    virtual void hello() {
        cout << "parent class hello...";
    }
};

class Child : public Parent {
public:
    void show(){
        cout << "child class show...\n";
    }
    void hello() {
        cout << "child class hello...\n";
    }
};

int main(){
    Child child1;
    Parent *ptr;

    ptr = &child1; //run time binding
    ptr->hello(); //virtual Function
    child1.show();

    return 0;
}