#include <iostream>
#include <string>
using namespace std;

int tilingProbem(int n) {

    //base case
    if(n == 0 || n == 1) {
        return 1;
    }

    //verticle
    int ans1 = tilingProbem(n - 1); // 2xn-1

    //horizontal
    int ans2 = tilingProbem(n - 2); // 2xn -2

    return ans1 + ans2;
}

int main() {
    int n = 3;
    cout << tilingProbem(n) << endl;

    return 0;
}