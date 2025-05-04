// O(nlog.n)

#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int si, int mid, int ei){
    vector<int> temp;
    int i = si;
    int j = mid + 1;

    while (i <=mid && j <= ei) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }
    while(i <= mid) {
        temp.push_back(arr[i++]);
    }
    
    while(j <= ei) {
        temp.push_back(arr[j++]);
    }

    //vector --> original array
    for(int idx = si, x = 0; idx <= ei; idx ++) { //org arr
        arr[idx] = temp[x++];
    }
};

void mergeSort(int arr[], int si, int ei) {//O(nlogn)

//base case
    if(si >= ei) {
        return;
    }

    int mid =  si + (ei - si)/2; //(si + ei) /2;

    //left half
    mergeSort(arr, si, mid);

    //right half
    mergeSort(arr, mid + 1, ei);

    merge(arr, si, mid, ei); // conquer
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

#include<bits/stdc++.h>
 
using namespace std;
 
void merge(vector<int> &arr, int startIndex, int endIndex, int mid) {
    // left array is already sorted
    // right array is also sorted
    // left array is from [startIndex .... mid]
    // right array is from [mid+1 ..... end]
    int i = startIndex, j = mid+1;
    
    vector<int> sortedArr;
 
    // till the time there are elements in both the arrays
    while(i<=mid && j<=endIndex) {
        // there are 2 elements to compare
        if(arr[i]<arr[j]) {
            sortedArr.push_back(arr[i]);
            i++;
        } else {
            sortedArr.push_back(arr[j]);
            j++;
        }
    }
 
    // when we come out of this while loop ??? - what does it mean ???
    // if my left array has some elements
    while(i<=mid) {
        sortedArr.push_back(arr[i]);
        i++;
    }
    // if my right array has some elements
    while(j<=endIndex) {
        sortedArr.push_back(arr[j]);
        j++;
    }
 
    // sortedArr is a new array
    for(int k=startIndex;k<=endIndex;k++) {
        // copy the values of sortedArr into arr so that arr becomes sorted
        // TODO
    }
}
 
void mergeSort(vector<int> &arr, int startIndex, int endIndex) {
    // Base Case
    if(startIndex==endIndex) {
        // Our array is already sorted since there is only 1 element
        return;
    }
    int mid = (startIndex+endIndex)/2;
    
    // Sort the left array
    mergeSort(arr, startIndex, mid);
 
    // Sort the right array
    mergeSort(arr, mid+1, endIndex);
 
    // Left and Right both arrays are sorted
    // Merge these 2 sorted arrays into 1
    merge(arr, startIndex, endIndex, mid);
}
 
int main() {
    vector<int> arr = {5, 4, 1, 3, 2};
    mergeSort(arr, 0, arr.size() - 1);

    return 0;
}