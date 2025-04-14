//count how many times lowercase vowels occured in a string entered by the user {a,e,i,o,u};

#include <iostream>
#include <string>
using namespace std;

int getVowelCount(string str) { 
    int vowelCount = 0;

    for(int i = 0; i<str.length(); i++){
        if(str[i] == 'a' || str[i] =='e' ||
            str[i] =='i' || str[i] == 'o' ||
            str[i] == 'u'){
                vowelCount ++;
            }
    }
    cout << vowelCount << endl;
    return vowelCount;

}

int main() {

    char word[] = "aeiou vowel";
    getVowelCount(word);
    return 0;
}

//qs 2.
bool areAlmostEqual(string s1, string s2) {
    if (s1.length() != s2.length()) {
        return false;
    }

    char diffChar1, diffChar2;
    int diff = 0;

    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            if (diff == 0) {
                diffChar1 = s1[i];
                diffChar2 = s2[i];
            } else if (diff == 1) {
                // Check if the characters are swappable
                if (s1[i] != diffChar2 || s2[i] != diffChar1) {
                    return false;
                }
            } else {
                // More than two differences
                return false;
            }
            diff++;
        }
    }

    // If there's only 1 differing character, cannot swap to match
    if (diff == 1) {
        return false;
    }

    return true;
}
