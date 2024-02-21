#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    //freopen("div7.in", "r", stdin);
    //freopen("div7.out", "w", stdout);
    int n; cin >> n;
    vector<long long> sums(n+1);
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        sums[i+1] = (val + sums[i]) % 7;
    }
    bool check = false;
    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if ((sums[i] - sums[j]) % 7 == 0) {
                cout << i - j << endl;
                check = true;
                break;
            }
        }
        if (check == true) {
            break;
        }
    }
    if (check == false) {
        cout << 0 << endl;
    }

}