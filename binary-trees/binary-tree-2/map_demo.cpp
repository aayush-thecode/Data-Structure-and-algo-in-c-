#include <iostream>
#include <map>
#include <string>
using namespace std;


int main() {
    map<int, string> m;

    //creating a map
    m[110] = "Aayush";
    m[101] = "sandesh";
    m[201] = "sandesh";

    //accessing val using key
    cout << m[201] << endl;

    cout << m.count(120) << endl;

    for(auto it : m) {
        cout << "key = "<< it.first << ", " << "value = " << it.second << endl;
    };
    return 0;
}