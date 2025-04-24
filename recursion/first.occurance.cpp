#include <iostream>
#include <vector>
using namespace std;

int firstOccur(vector<int> arr, int i, int target) {
    //base case
    if(i == 0) {
        return -1;
    }

    if(arr[i] == target) {
        return i;
    }
    return firstOccur(arr, i+1, target);
}

int main(){
    vector<int> arr = {1,2,3,3,3,4};

    cout << firstOccur(arr, 0, 4) << endl;
    
    return 0;
}