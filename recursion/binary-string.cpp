#include <iostream>
#include <string>
using namespace std;

void binarySearch(int n, int lastPlace, string ans) {
//base case
    if(n == 0) {
        cout << ans << endl;
        return;
    }

    if(lastPlace != 1) {
        binarySearch(n-1, 0, ans + '0');
        binarySearch(n-1, 1, ans + '1');
    } else {
        binarySearch(n-1, 0, ans + '0');
    }
};

void binarySearch(int n, string ans) {
    //base case
        if(n == 0) {
            cout << ans << endl;
            return;
        }
    
        if(ans[ans.size()-1]!= 1) {
            binarySearch(n-1, ans + '0');
            binarySearch(n-1, ans + '1');
        } else {
            binarySearch(n-1, ans + '0');
        }
    };

int main() {
    string ans = "";
    binarySearch(1, 0, ans);
    return 0;
}