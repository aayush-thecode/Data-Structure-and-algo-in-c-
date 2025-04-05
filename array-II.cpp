// #include <iostream>
// using namespace std;

// void printSubArray(int *arr, int n) {
//     for(int start = 0; start <n; start++) { //n
//         for(int end = start; end<n; end++){ //n  
//             // cout << "("<< start << "," <<end << ")";
//             for(int i = start; i <= end; i++) {
//                 cout << arr[i];
//             }
//             cout << ", ";
//         }
//         cout << endl;
//     }
// }

// int main (){
//     int arr[5] = {1,2,3,4,5};
//     int n = 5;

//     printSubArray(arr, n);
//     return 0;
// }

#include <iostream>
using namespace std;

void maxSubarray1(int *arr, int n) {
    int maxSum;

    for(int start = 0; start <n; start++){
        for(int end = start; end<n; end++){
        int curSum = 0;
            for(int i = start; i<= end; i++){
                curSum += arr[i];
            }
            cout << curSum << ",";
            maxSum = max(maxSum, curSum);
        }
        cout << endl;
    }
    cout<< "maximum subarray sum =" << maxSum <<endl;
}

int main () {
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = sizeof(arr) / sizeof(int);

    maxSubarray1(arr, n);
    return 0;
}