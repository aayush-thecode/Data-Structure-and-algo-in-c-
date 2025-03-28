// question 1:
#include <iostream>
using namespace std;

int main () {
int n = 5;
bool val = true; 


for(int i = 0; i<n; i++){
    for(int j = 0; j<=i; j++){
        cout<<val<<"";
        val = !val;
    }
    cout << "\n";
}


    return 0; 
}