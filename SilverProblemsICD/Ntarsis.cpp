#include <iostream>
using namespace std;

int main() {
    int number, cases;
    cin >> number;
    for (int i = 0; i < number; i++) {
        cin >> cases;
        if (cases % 3 == 0) {
            cout << cases / 3 << " " << cases / 3;
        }
        else {
            cout << cases / 3 << " " << cases / 3 + 1;
        }
        
    }
}