// 1. write a c++ program to get a number from the user and print whether its positive or negative.

// #include <iostream>
// using namespace std;

// int main() {
// int number;

// cout << "enter number:" <<endl;
// cin>>number;

// //if number is positive, negative or zero 

// if(number == 0) {
//     cout<<"number is zero"<<endl;
    
// } else if(number > 0 ) {
//     cout<<"number is positive"<<endl;

// } else {
//     cout<<"number is negetive"<<endl;
// }

//     return 0; 
// }


// write a c++ program that takes a year from the user and print whether the year is a leap year or not.

// #include <iostream>
// using namespace std;

// int main () {
// int year;
// cout<<"enter year:"<<endl;
// cin>>year;

// if((year % 4 == 0 && year % 100 != 0 ) || (year % 400 == 0)){
//     cout << year << "is a leap year."<<endl;
// }else{
//     cout<<year<<"is not a leap year"<<endl;
// }

//     return 0;
// }

// 5. For any 3 digit number check whether its an armstrong number or not. Armstrong number is a bumber that is equal to the sum of cubes of its digits. Eg: 371 is an armstrong number. 3*3*3 + 7*7*7 + 1*1*1 = 371

#include <iostream>
#include <math.h>

using namespace std;

bool isArmstrong(int num) {
    int originalNum = num, sum = 0;
while (num > 0) {
    int digit = num % 10;
    sum += pow(digit, 3);

    num /= 10;
} 
    return sum == originalNum;
}

int main () {

int num;

cout<<"please enter a number:"<<endl;
cin>>num;

if(isArmstrong(num)){
    cout<<num<<"number is armstrong number"<<endl;
}else{
    cout<<"number is not armstrong number"<<endl;
}
    return 0;
}