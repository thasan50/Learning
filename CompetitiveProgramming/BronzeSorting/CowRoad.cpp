#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    int n; cin >> n;
    vector<pair<int, int>> cows;
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        pair<int, int> temp = make_pair(a, b);
        cows.push_back(temp);
    }
    sort(cows.begin(), cows.end());
    int current = 0; 
    for (int i = 0; i < n; i++) {
        if (current > cows[i].first) {
            current += cows[i].second;
        }
        else {
            current = cows[i].first + cows[i].second;
        }
    }
    cout << current;
}