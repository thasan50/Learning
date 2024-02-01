#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main () {
    freopen("guess.in", "r", stdin);
    freopen("guess.out", "w", stdout);
    int n; cin >> n;
    vector<vector<string>> animals(n);
    for (int i = 0; i < n; i++) {
        string name; cin >> name;
        int k; cin >> k;
        for (int j = 0; j < k; j++) {
            string temp; cin >> temp;
            animals[i].push_back(temp);
        }
    }
    int maximum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int common = 1;
            for (const auto &c1 : animals[i]) {
                for (const auto &c2 : animals[j]) {
                    if (c1 == c2) {
                        common++;
                        break;
                    }
                }
            }
            maximum = max(maximum, common);
        }
    }
    cout << maximum;
}