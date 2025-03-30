

// #include <iostream>
// using namespace std;

// int factorial(int n){
//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact *=i;
//     }
//     return fact;
// }

// int binCoeff(int n, int r){
//     int val1 = factorial(n);
//     int val2 = factorial(r);
//     int val3 = factorial(n-r);

//     int result = val1/ (val2*val3);
//     return result;
// }

// int main(){

// cout<<binCoeff(5,3)<<endl;

//     return 0;
// }


//print all primes in a range from 2 to n

// #include <iostream>
// using namespace std;

// bool isPrime(int n){
//     if(n==1){
//         return false;
//     }

//     for(int i=2; i*i<=n; i++){
//         if(n % i ==0){
//             return false;
//         }
//     }
//     return true;
// }

// void allPrimes(int n){

// //all prime s from 2 to n

//     for(int i = 2; i<=n; i++){
//         if(isPrime(i)){
//             cout << i << " ";
//         }
//     }
//     cout << endl;
// }

// int main(){
//     allPrimes(600);
//     return 0;
// }


// functions (assignment questions)

//Question 1. write a funtion if a number is a palindrome in C++ (121 is a palindrome, 321 is nor).

//A number is called a palindrome if the number is equal to the reverse of a number. for eg: 121 is a palindrome because the reverse is 321 to 123, which is not equal to 321.

// #include <iostream>
// using namespace std;

// int rev(int n) {

//     int res = 0;
//     while(n > 0){
//         int lastDigit = n%10;
//         res = res*10 + lastDigit;
//         n = n/10;
//     }
//     return res;
// }

// bool isPalindrome(int num){
//     int revNum = rev(num);
//     return num == revNum;
// }



// int main () {
//     cout << isPalindrome(123);
//     return 0; 
// }

// question 2: write a function to calculate the sum of digits of a number

// #include <iostream>
// using namespace std;

// int sum (int a, int b = 1){
//     cout <<  a + b;
// }

// int main(){
//     sum(5, 2);
//     return 0;
// }


// int n = 123;
// int digSum(int n){
//     int res = 0;

//     while(n>0){
//         res += n %10; 
//         n = n/10;
//     }
//     return res;
// }


// write a function while takes 2 numbers as parameters (a&b) and outputs: a^2 + b^2 +2ab.

// #include <iostream>
// using namespace std;

// int formula(int a, int b){
//     return (a*a + b*b) + 2*a*b;
// }


// int main (){
//     cout << formula(4, 5);

//     return 0;
// }

// question 4: write a function that prints the largest of 3 numbers.

// #include <iostream>
// using namespace std;


// int largest(int a, int b, int c) {
//  if( a > b && a > c) {
//     return a;
//  } else if (b>c){
//     return b; 
//  } else {
//     return c;
//  }

// }

// int main () {
// cout << largest(1, 2 ,3)<< endl;
//     return 0;
// }

//write a function that accepts a character(ch) as parameters and returns the character that occurs after ch in the english alphabet.

// eg: input = 'c', return value = 'd' note: for ch 'z', return a;

// #include <iostream>
// using namespace std;

// char character(char ch) {
//     return ch + 1;
// }

// int main (){
//     cout<<character('a')<<endl;
//     return 0;
// }