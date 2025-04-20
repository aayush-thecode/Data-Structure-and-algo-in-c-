#include <iostream>
#include <string>
using namespace std;

class Car {
    string name;
    string color;

    public:
        Car(){
            cout << "constructor without params\n";
        }

        Car(string name, string color){
            cout << "constructor with params\n";
            this->name = name;
            this-> color= color;
        }

        void start() {
            cout << "car has started..\n";
        }

        void stop() {
            cout << " car has stopped..\n";
        }

        //getter
        string getName() {
            return name;
        }
};

int main() {
    Car c0; //non-parameter
    Car c1("maruti 800", "white");

    cout << "car name : " << c1.getName() << endl;
    
    return 0;
}