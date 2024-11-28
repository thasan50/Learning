#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int base = 2;
    for (int i = 1; i < n; i++) {
        base = base * 2;
        base = base % (1000000007);
    }
    cout << base << endl;
    return 0;
}