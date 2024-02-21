#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int size; cin >> size;
        int arr[size][size] = {};
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                cin >> arr[j][k];
            }
        }
        int count[size];
        bool first = false;
        int pos = 0;
        for (int h = 0; h < size; h++) {
            for (int y = 0; y < size; y++) {
                if (arr[h][y] == 1 && first == false) {
                    count[h]++;
                    first = true;
                    pos = h;
                }
                else if (arr[h][y] == 1) {
                    count[h]++;
                }
            }
        }
        if (count[pos] == count[pos + 1]) {
            cout << "SQUARE" << endl;
        }
        else {
            cout << "TRIANGLE" << endl;
        }
    }
}