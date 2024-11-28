#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
int main() {
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    int n; int k; int b;
    int temp;
    cin >> n >> k >> b;
    int min = 0;
    vector<int> crosswalks(n, 1);
    vector<int> sums(n+1, 0);
    for (int i = 0; i < b; i++) {
        cin >> temp;
        crosswalks[temp - 1] = 0;
    }
    for (int i = 0; i < n; i++) {
        sums[i+1] += crosswalks[i];
        sums[i+1] += sums[i];
    }
    for (int i = 1; i <= n - k + 1; i++) {
        if (sums[i+k-1] - sums[i-1] > min) { //I want to show how many lights need to be made
            min = sums[i+k-1] - sums[i-1];
        }
    }
    /*for (int i = 0; i <= n; i++) {
        cout << sums[i] << " ";
    }*/
    if (min >= k) {
        cout << 0 << endl;
    }
    else {
        cout << k - min << endl;
    }
}