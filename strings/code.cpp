#include <iostream>
#include <cstring>
#include <utility>
using namespace std;

void toUpper(char word[], int n) {

    for(int i = 0; i<n; i++){
        char ch = word[i];
        if(ch >= 'a' && ch <='z') { // uppercase
            continue;
        } else { //Lowercase
            word[i] = ch - 'A' + 'a';
        }
    } 
}

int main () {
    char word[] = "ApPle";
    toUpper(word, strlen(word));

    cout << word << endl;

    return 0;
}