// #include <iostream>
// using namespace std;

// void printSubArray(int *arr, int n) {
//     for(int start = 0; start <n; start++) { //n
//         for(int end = start; end<n; end++){ //n  
//             // cout << "("<< start << "," <<end << ")  ";
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


// max subarray sum 

// #include <iostream>
// using namespace std;

// void maxSubarray1(int *arr, int n) {
//     int maxSum = INT8_MIN;

//     for(int start = 0; start <n; start++){
//         for(int end = start; end<n; end++){
//         int curSum = 0;
//             for(int i = start; i<= end; i++){
//                 curSum += arr[i];
//             }
//             cout << curSum << ",";
//             maxSum = max(maxSum, curSum);
//         }
//         cout << endl;
//     }
//     cout<< "maximum subarray sum =" << maxSum <<endl;
// }

// int main () {
//     int arr[6] = {2, -3, 6, -5, 4, 2};
//     int n = sizeof(arr) / sizeof(int);

//     maxSubarray1(arr, n);
//     return 0;
// }


// optimize 

// void maxSubarray1(int *arr, int n) {
    //     int maxSum = INT8_MIN;
    
    //     for(int start = 0; start <n; start++){
                // int currSum = 0;
    //         for(int end = start; end<n; end++){
    //         int curSum += arr[end] ;
    //             for(int i = start; i<= end; i++){
    //                 curSum += arr[i];
    //             }
    //             cout << curSum << ",";
    //             maxSum = max(maxSum, curSum);
    //         }
    //         cout << endl;
    //     }
    //     cout<< "maximum subarray sum =" << maxSum <<endl;
    // }

// Kadan's Algorithm (DP) buy and sell stocks

// #include <iostream>
// #include <climits>
// using namespace std;

// void maxProfit(int *prices, int n) {
//     int bestBuy[100000];
//     bestBuy[0] = INT_MAX;
//     cout << bestBuy[0];

//     for(int i = 1; i<n; i++) {
//         bestBuy[i] = min(bestBuy[i-1], prices[i-1]);
//         cout << bestBuy[i] << ",";
//     }

//     int maxProfit = 0;
//     for(int i = 0; i<n; i++) {
//         int currProfit = prices[i]- bestBuy[i];
//         maxProfit = max(maxProfit, currProfit);
//     }
//     cout << "max Profit = "<<maxProfit << endl;;
// }

// int main () {
//     int prices[6] = {7, 1, 5, 3, 6, 4};
//     int n = sizeof(prices) / sizeof(int);

//     maxProfit(prices, n);
//     return 0;
// }

//trapping rainwater

#include <iostream>
#include <climits>
using namespace std;

int trap(int *heights, int n) {
    int leftMax[20000], rightMax[20000];
    leftMax[0] = heights[0];
    rightMax[n-1] = heights[n-1];

    for(int i=1; i<n;i++) {
        leftMax[i] = max(leftMax[i-1], heights[i-1]);
    } for(int i = n-2; i>- 0 ; i--) {
        rightMax[i] = max(rightMax[i+1], heights[i+1]);
    }

    int waterTrapped = 0;
    for(int i =0; i<n; i++) {
        int currWater =  min(leftMax[i], rightMax[i])-heights[i];

        if(currWater > 0) {
            waterTrapped += currWater;
        }
    }
    cout<<"water trapped = " << waterTrapped<< endl;
    return waterTrapped;
}

int main() {
    int heights[7] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(heights) / sizeof(int);

    trap(heights, n);
    return 0;
}