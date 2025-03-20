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

// in a program, input the side of a square. You have to output the area of the square.

//input: n(side)
// output: n*n(area)

#include <iostream>
using namespace std;

int main () {

    int n;

    cout<<"please enter a value:" ;
    cin>>n;

    int areaOfSquare = n * n;
    cout<<" the area of square is:";
    cout<< areaOfSquare << endl;
    return 0;
}