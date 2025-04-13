// question 1:
// #include <iostream>
// using namespace std;

// int main () {
// int n = 5;
// bool val = true; 


// for(int i = 0; i<n; i++){
//     for(int j = 0; j<=i; j++){
//         cout<<val<<"";
//         val = !val;
//     }
//     cout << "\n";
// }


//     return 0; 
// }

//question 2.
// #include <iostream>
// using namespace std;

// int main(){
//     int n = 5; //number of row // 4space+5star
//     // 3 + 5
//     // 2 + 5
//     // 1+ 5
//     // 0 + 5

//     for(int i = 0; i<n; i++){
//         //space
//         for(int k = 0; k<=(n-i-1); k++){
//             cout<<" ";
//         }
//         for (int j = 1; j<n; j++) {
//             cout<<"*";
//     } 
//     cout<<endl;
//     }
// }


//question 3.

// #include <iostream>
// using namespace std;

// int main (){

//    int n = 5;
   
//    //first half piramid

//    for(int i = 1; i<=n; i++){
//     //spaces
//     for(int j = 1; j<=n-i; j++) {
//         cout << " ";
//     } 
//     // nums backward
//     for(int j = i; j>=1; j--){
//         cout<<j;
//     }
//     //nums forward
//     for(int j = 2; j<=i; j++){
//         cout<< j;
//     }
//     cout<<endl;
//    }

//    // second half piramid
//     return 0;
// }

#include <iostream>
using namespace std;

int main () {
    int n = 5;

    for(int i = 1; i <= n; i++) {
        // cout << i << endl;
        for(int j = 1; j<= i; j++){
            cout<< i;
        }
        cout << endl;
    }

     return 0;
}