#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Job {
public: 
    int idx;
    int deadline;
    int profit;

    Job(int idx, int deadline, int profit) {
        this->idx = idx;
        this->deadline = deadline;
        this->profit = profit;
    }
};

int maxChainLength(vector<pair<int, int>> pairs) {
    int n = pairs.size();
    vector<Job> jobs;

    for(int i = 0; i<n; i++) {
        jobs.emplace_back(i, pairs[i].first, pairs[i].second); // idx, deadline, profit
    }
    sort(jobs.begin(), jobs.end(), [] (Job &a, Job &b){ //capture // lambda fudnction
        return a.profit > b.profit;
    }); //descending order on basis of profit

    cout << "selecting Job" << jobs[0].idx << endl;
    int profit = jobs[0].profit;
    int safeDeadline = 2;

    for(int i = 1; i<n; i++) {
        if(jobs[i].deadline >= safeDeadline) {
            cout << "selecting Job" << jobs[i].idx << endl;
            profit += jobs[i].profit;
            safeDeadline++;
        }
    }
    cout << "max profit = " << profit << endl;
} 


int main() {
    int n = 5;
    vector<pair<int, int>> pairs(n, make_pair(0, 0));
    pairs[0] = make_pair(5, 24);
    pairs[1] = make_pair(39, 60);
    pairs[2] = make_pair(5, 28);
    pairs[3] = make_pair(27, 40);
    pairs[4] = make_pair(50, 90);

    maxChainLength(pairs);
    return 0;
}