#include <iostream>
using namespace std;

int getIthBit(int num, int i) {

    int bitMask = 1<< i;

    if((num & bitMask) == 0){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    cout << getIthBit(71, 9);
    return 0;
}