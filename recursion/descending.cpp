// print numbers in descending order. fron n to 1;

#include <iostream>
using namespace std;

void print(int n){
    if(n == 0){
        return;
    }

    cout << n << " "; //kaam
    print(n-1); //faith, next call
}

int main(){
    print(5);
    return 0;
}