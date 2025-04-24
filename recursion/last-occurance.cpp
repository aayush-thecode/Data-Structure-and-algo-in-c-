#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> arr, int target, int i) {
    if(i == arr.size()) {
        return -1;
    }


    int idxFound = lastOccur(arr, target, i+1);

    if(idxFound == -1 || arr[i] == target){
            return i;
        }
    };

int main() {
    vector<int> arr = {1,2,3,4,4,4,5,6}; 

    cout << lastOccur(arr, 4, 4) << endl;

    return 0;
}