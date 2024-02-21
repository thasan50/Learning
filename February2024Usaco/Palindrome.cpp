#include <iostream>
using namespace std;

int main () {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int s; cin >> s;
        int temp = s;
        int reverse = 0;
        while(temp > 1) {
            reverse *= 10;
            reverse += temp % 10;
            temp /= 10;
        }
        if (reverse == s) {
            cout << "B" << endl;
        }
        else {
            if (s % 10 == 0) {
                cout << "E" << endl;
            }
            else {
                cout << "B" << endl;
            }
        }
    }
}