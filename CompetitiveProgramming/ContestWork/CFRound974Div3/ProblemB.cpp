#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;
        int begin = n - k + 1;
        if (begin % 2 == 0) {
            if (k % 4 == 2 || k % 4 == 3) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
        else {
            if (k % 4 == 1 || k % 4 == 2) {
                cout << "NO" << endl;
            }
            else {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}