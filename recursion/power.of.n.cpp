#include <iostream>
#include <vector>
using namespace std;

int pow(int x, int n) { //Time-complexity O(log.n)
    //base case
    if(n ==0) {
        return 1;
    }

     x^n/2;
     int halfPow = pow(x, n/2);
     int halfPowSquare = halfPow * halfPow;

     if(n % 2 != 0) {
        //odd value
        return x * halfPowSquare;
     }
     return halfPowSquare;
}

int main() {
    cout << pow(2,10) << endl;
    return 0;
}