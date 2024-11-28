#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("traffic.in", "r", stdin);
    freopen("traffic.out", "w", stdout);
    int n; cin >> n;
    vector<string> type(n);
    vector<int> lower(n);
    vector<int> upper(n);
    int a = -1000000;
    int b = 1000000;
    int a2 = -1000000;
    int b2 = 1000000;
    for (int i = 0; i < n; i++) {
        cin >> type[i] >> lower[i] >> upper[i];
    }
    for (int j = 0; j < n; j++) {
        if (type[j] == "none") {
            a = max(a, lower[j]);
            b = min(b, upper[j]);
        }
        else if (type[j] == "on") {
            a += lower[j]; b += upper[j]; 
        }
        else if (type[j] == "off") {
            a -= upper[j]; b -= lower[j];
        }
    }
    for (int k = n - 1; k >= 0; k--) {
        if (type[k] == "none") {
            a2 = max(a2, lower[k]);
            b2 = min(b2, upper[k]);
        }
        else if (type[k] == "on") {
            a2 -= upper[k];
            b2 -= lower[k];
        }
        else if (type[k] == "off") {
            a2 += lower[k]; b2 += upper[k];
        }
    }
    cout << max(0, a2) << " " << max(0, b2) << endl;
    cout << max(0, a) << " " << max(0, b) << endl;

}