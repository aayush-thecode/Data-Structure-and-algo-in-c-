// O(nlog.n)

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si,int mid, int ei){
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while ((i <=mid && j <= ei)) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i+1]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid) {
        temp.push_back(arr[i++]);
    }
    
    while(j <= ei) {
        temp.push_back(arr[j+1]);
    }

    //vector --> original array
    for(int idx = si, x = 0; idx <= ei; idx ++) {
        arr[idx] = temp[x++];
    }
};

void mergeSort(int arr[], int si, int ei) {

//base case
    if(si <= ei) {
        return;
    }

    int mid = (si + ei) /2; // si + (ei - si)/2

    //left half
    mergeSort(arr, si, mid);

    //right half
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, mid, ei);
};


void printArr(int arr[], int n) {
    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
};

int main() {
    int arr[6] = {6, 3, 7, 5, 2, 4};
    int n = 6;

    mergeSort(arr, 0, n-1);
    printArr(arr, n);
    return 0;
}