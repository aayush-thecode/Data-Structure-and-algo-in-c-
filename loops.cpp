// for loop

//check if a number is prime number or not 

// #include<iostream>
// using namespace std;

// int main() {
// int n;
// bool isPrime = true;

// cout << "please enter your number"<<endl;
// cin >> n;

//     for(int i = 2; i<= n; i++) {
//         if(n % i == 0) {
//             isPrime = false;
//             break;
//         }
//     }

//     return 0;
// }

//1.WAP to find the factorial of number enter by the user.

// #include <iostream>
// using namespace std;

// int main() {
// int n;
// int fact = 1; 

// cout << "please enter a number:"<<endl;
// cin>> n;

// for(int i=1; i<=n; i++) {
//     fact *= i;
// }

// cout << "factorial of" << n << " = "<< fact <<"\n";

//     return 0;
// }

//2. WAP to print the multiplication table of a number, entered by the user.

// #include <iostream>
// using namespace std;

// int main () {
// int num;
// cout<<"enter a number : ";
// cin>>num;

// for(int i = 1; i <= 10; i++) {
//     cout << (num * i) << endl;
// }

// cout << endl;

// return 0;
// }

//3. WAP to input  a number and check whether the number is a SArmstrong number or not. An Armstrong number is a number that is equal to the sum of cubes of its digits.

// #include <iostream>
// using namespace std;

// int main () {
// int num, originalNumber, remainder, result = 0 ;
// cout << "please enter number :";
// cin >> num;
// originalNumber = num;

// while(originalNumber != 0){
//     remainder = originalNumber % 10;

//     result += remainder * remainder * remainder;

//     originalNumber /= 10;
// }
// if(result == num)
// cout << num << " is an Armstrong number.";

// else 
// cout << num << "is not an Armstrong number.";



// return 0;
// }


// 4. For a positive N, WAP that prints all the prime numbers from 2 to N. (Assume N >= 2)

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int N;
//     cout << "Enter a number: ";
//     cin >> N;

//     if (N <= 1) {
//         cout << N << " is NOT prime" << endl;
//         return 0;
//     }

//     bool isPrime = true;
//     for (int i = 2; i <= sqrt(N); i++) {
//         if (N % i == 0) {
//             isPrime = false;
//             break; // Exit loop if a divisor is found
//         }
//     }

//     if (isPrime)
//         cout << N << " is prime" << endl;
//     else
//         cout << N << " is NOT prime" << endl;

//     return 0;
// }

// 5. For a positive N, WAP that prints the first N fibonnaci numbers.( Assume N >=2) 
// #include <iostream>
// using namespace std;

// int main() {
//     int N;
//     cout << "Enter the number of Fibonacci terms: ";
//     cin >> N;

//     int first = 0, second = 1;
    
//     cout << "Fibonacci Series: " << first << " " << second << " ";
    
//     for (int i = 3; i <= N; i++) {
//         int next = first + second;
//         cout << next << " ";
//         first = second;
//         second = next;
//     }

//     cout << endl;
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
int sum = 0;
int n = 200;

for(int idx = n; idx!=0; idx = idx/10){
    int digit = idx % 10;
    sum = sum + digit*digit*digit;
} if(n==sum)
cout <<"yes";
else 
cout <<"no";

    return 0;
}