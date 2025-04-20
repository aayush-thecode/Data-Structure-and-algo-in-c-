#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "enter rows :" ;
    cin >> rows;
    cout << "enter cols : ";
    cin >> cols;

    int* *matrix = new int*[rows];

    for(int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    //data store
    int x = 1;
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j<cols; j++){
            matrix[i][j] = x++;
            cout << matrix[i][j] << " ";
        }
        cout<<endl;
    } 

    // Optional: free the memory
    for(int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}