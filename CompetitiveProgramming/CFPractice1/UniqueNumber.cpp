#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int x; cin >> x;
        int temp = 9;
        vector<int> k;
        if (x >= 45) {
            cout << -1;
        }
        else {
            while (x > 0) {
                if (x >= temp) {
                    k.push_back(temp);
                    x -= temp;
                    temp--;
                }
                else {
                    temp--;
                }
            }
            for (int x = k.size() - 1; x >= 0; x--) {
                cout << k[x];
            }
        }
        cout << endl;
    }
    return 0;
}