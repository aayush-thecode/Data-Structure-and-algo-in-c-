// #include <iostream>
// using namespace std;

// void printArr(int arr[]){
//     int n = sizeof(arr) / sizeof(int);
//     for(int i = 0; i < n; i++){
//         cout << arr[i]<< ",";
//     }
//     cout << endl;
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);
//     return 0;
// }

//linear search

// #include <iostream>
// using namespace std;

// int linearSearch(int *arr, int n, int key) {
//     for(int i = 0; i<n; i++){
//         if(arr[i] == key) {
//             return i;
//         }
//     }
//     return -1;
// }

// int main() {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
//     int n = sizeof(arr) / sizeof(int);

//     cout << linearSearch(arr, n, 10)<< endl;

//     return 0;
// }

//reverse an array

// #include <iostream>
// using namespace std;

// void printArr(int *arr, int n) {
//     for(int i =0; i<n; i++) {
//         cout << arr[i] << ",";
//     }
//     cout << endl;
// }

// int main () {
//     int arr[] = {5, 4, 3, 9, 2};
//     int n = sizeof(arr) / sizeof(int);

//     int start = 0, end = n-1;

//     while(start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end]= temp;
//         start ++;
//         end --;
//     }
//     printArr(arr, n);
//     return 0;
// }


//Binary search 

// #include <iostream>
// using namespace std;

// int binSearch(int *arr, int n, int key) {
//     int st = 0, end = n-1;

//     while(st <=end) {
//         int mid = (st +end) / 2;
//         if(arr[mid] == key) {
//             return mid; //key found
//         }else if(arr[mid] < key) {
//             st = mid + 1;
//         } else {
//             //1st half
//             end = mid -1;
//         }
//     }
//     return -1;
// }

// int main () {
//     int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
//     int n = sizeof(arr) / sizeof(int);

//     cout << binSearch(arr, n, 12) << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// void printArr(int *ptr, int n) {
//     for(int i=0; i<n; i++) {
//         cout << *ptr << "\n";
//         ptr = ptr + 1;
//     }
// }

// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     int n = sizeof(arr) / sizeof(int);

//     printArr(arr, n);

//     return 0;
// }

