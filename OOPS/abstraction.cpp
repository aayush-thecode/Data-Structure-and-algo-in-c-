//abstraction class/ pure virtual function

#include <iostream>
using namespace std;

//abstract class
class Shape {
public:
    virtual void draw() = 0; //abstract fnx, pure virtual fnx
};

class Circle : public Shape {
public:
    void draw() {
        cout << "draw circle\n";
    }
};

class Square : public Shape {
    public:
        void draw() {
            cout << "draw Square\n";
        }
    };

int main() {
    Circle cir1;
    cir1.draw();

    Square sqr1;
    sqr1.draw();

    return 0;
}