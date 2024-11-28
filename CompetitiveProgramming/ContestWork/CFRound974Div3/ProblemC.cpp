#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t; // t is test cases
    for (int i = 0; i < t; i++) {
        int n; cin >> n; // n is population
        long long total = 0; // total wealth
        vector<int> people(n);
        for (int j = 0; j < n; j++) {
            cin >> people[j]; // fill out people vector
            total += people[j]; // sum of wealth
        }
        sort(people.begin(), people.end()); // sort from least to greatest
        double avg = (double)total / n; // average wealth
        double median = people[n/2]; // Median value, everything to the left is less
        if (n <= 2) { // Case for when n is 1 or 2
            cout << -1 << endl;
        }
        else if (median < avg / 2) { 
            cout << 0 << endl;
        } // 2 * median + 1/n = avg, avg * n = total, 
        else { // Median must be less than half the average, avg = median * 2 + 1/n
            long long temp = round((median*2 + (double)1/n - avg)*n);
            cout << temp << endl;
        }
    }
}