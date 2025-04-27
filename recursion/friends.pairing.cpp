#include <iostream>
#include <string>
using namespace std;

int friendsPairing(int n) {
//base case
    if(n ==1 || n ==2) {
        return n;
    }

   return friendsPairing(n-1) + (n-1) * friendsPairing(n-2);
};

int main() {
    cout << friendsPairing(4) <<endl;

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
 
int countPairing(int n) {
    if(n<=1) {
        return n;
    }
 
    int remain_single = 1*countPairing(n-1);
    int pair_up = (n-1) * countPairing(n-2);
 
    return remain_single + pair_up;
}
 
 
int main() {
    int n = 4;
    int total_ways = countPairing(n);
    cout<<"Number of ways to pair "<< n<<" friends is "<<total_ways<<endl;
}

#include <bits/stdc++.h>
using namespace std;
 
void towerOfHanoi(int n, char source, char dest, char helper) {
    if(n==0) {
        return;
    }
 
    towerOfHanoi(n-1, source, helper, dest);
    cout<<"Move disk "<<n<<" from rod "
        << source <<" to rod "<<dest<<" using rod "<<helper<<endl;
    towerOfHanoi(n-1, helper, dest, source);
}
 
int main() {
    int n = 2;
 
    towerOfHanoi(n, 'A', 'C', 'B');
}