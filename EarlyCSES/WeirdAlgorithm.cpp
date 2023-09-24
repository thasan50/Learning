#include <iostream>
using namespace std;
//success
int main() {
    int64_t a;
    cin >> a;
    while (a > 1) {
        if (a % 2 == 0) {
            cout << a << " ";
            a = a/2;
        }
        else {
            cout << a << " ";
            a = a*3 + 1;
        }
    }
    cout << a << " ";
return 0;
}