// #include <iostream>
// using namespace std;

// int main() {

//     cout << "* * * *\n";
//     cout << "* * * \n";
//     cout << "* * \n";
//     cout << "* \n";

//     return 0;
// }

// #include <iostream>
// #define PI 3.14;
// using namespace std;

// int main() {

//     int a;
//     int b;


//     cin>>a;
//     cin>>b;

//     int sum = a+b;
//     cout<<sum ;

//     return 0;
// }

// question no.1 in a program, input the side of a square. You have to output the area of the square.

//input: n(side)
// output: n*n(area)

// #include <iostream>
// using namespace std;

// int main () {

//     int n;

//     cout<<"please enter a value:" ;
//     cin>>n;

//     int areaOfSquare = n * n;
//     cout<<" the area of square is:";
//     cout<< areaOfSquare << endl;
//     return 0;
// }

// question 2. enter cost of 3 items from the user (using float data type) - a pencil, pen and an eraser. You have to output the total cost of the items back to the user as their bill. 

//(add on: you can also try adding 18% GST tax to the items in the bill as an advanced problem)

// #include <iostream>
// using namespace std;

// int main () {

//     float pencil;
//     float pen;
//     float eraser;

//     cout<<"please enter pencil amount:";
//     cin>> pencil;

//     cout<<"please enter pen amount:";
//     cin>> pen;

//     cout<<"please enter eraser amount:";
//     cin>> eraser;


//     float totalAmount = pencil + pen + eraser;
//     cout << "your total amount is:" << totalAmount;

//     float GST = ((totalAmount * 18) / 100) + totalAmount;
//     cout << "your total amount after 18% GST is:\n" << GST <<endl;

//     return 0;
// }

//question 3. Build a simple Intrest Calculator. input: principal(p), rate(r), time(t) output: (p*t*r) / 100

// #include <iostream>
// using namespace std;

// int main () {
//     float P;
//     float R;
//     float T;

//     cout << "please enter principle:";
//     cin>> P;

//     cout << "please enter Rate:";
//     cin>> R;
    
//     cout << "please enter time:";
//     cin>> T;

//     float SimpleIntrest = (P*T*R) / 100;

//     cout << "your Simple intrest is:"<< SimpleIntrest << endl;


//     return 0;
// }


// question 4. write  a program to calculate the are of a circle. input r(radius) output: PI * r * r(area)

#include <iostream>
#define PI 3.14
using namespace std;

int main () {

    float r;

    cout <<"please enter radius:";
    cin >> r;

    float area = PI * (r *r);
    cout<<"your area is:"<<area<<endl;

    return 0;
}