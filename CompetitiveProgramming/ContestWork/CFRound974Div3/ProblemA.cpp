#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k; cin >> n >> k;
        int counter = 0;
        int value = 0;
        for (int j = 0; j < n; j++) {
            int temp; cin >> temp;
            if (temp >= k) {
                value += temp;
            }
            else if (temp == 0 && value > 0) {
                value--;
                counter++;
            }
        }
        cout << counter << endl;
    }
    return 0;
}