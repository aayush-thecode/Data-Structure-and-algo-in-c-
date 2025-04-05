#include <iostream>
using namespace std;

void printArr(int arr[]){
    int n = sizeof(arr) / sizeof(int);
    for(int i = 0; i < n; i++){
        cout << arr[i]<< ",";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    return 0;
}