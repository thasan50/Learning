#include <iostream>
using namespace std;

int main () {
    int t; cin >> t;
    string temp;
    for (int i = 0; i < t; i++) {
        int countA = 0;
        int countB = 0;
        cin >> temp;
        for (int j = 0; j < 5; j++) {
            if (temp[j] == 'A') {
                countA++;
            }
            else {
                countB++;
            }
        }
        if (countA > countB) {
            cout << 'A' << endl;
        }
        else {
            cout << 'B' << endl;
        }
    }
}