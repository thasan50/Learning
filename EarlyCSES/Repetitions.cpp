#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string DNA;
    cin >> DNA;
    int y = DNA.length();
    int high = 1;
    int curr = 1;
    for (int i = 0; i < y - 1; i++) {
        if (DNA.at(i) == DNA.at(i+1)) {
            curr += 1;
        }
        else {
            if (high < curr) {
                high = curr;
            }
            curr = 1;
        }
    }
    if (curr > high) {
        high = curr;
    }
    cout << high;
}