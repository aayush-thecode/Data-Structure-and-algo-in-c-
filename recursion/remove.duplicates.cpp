#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string str, string ans, int i,int map[26]){
// base case
    if(i == str.size()) {
        cout << "ans : " << ans << endl;
        return;
    }

    char ch = str[i];
    int mapIdx = (int)(ch - 'a');

    if(map[mapIdx]) { // duplicate
        removeDuplicates(str, ans, i+1, map);
    } else { //not duplicate
        map[mapIdx] = true;
    }
};

int main(){
    string str = "appnnacollage";
    string ans = "";
    int map[26] = {false};

    removeDuplicates(str, ans, 0, map);
    return 0;
}
