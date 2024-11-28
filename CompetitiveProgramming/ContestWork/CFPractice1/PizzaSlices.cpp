#include <iostream>
using namespace std;

int main () {
    int n, m, k;
    cin >> n >> m >> k;
    if ((n * 8) / m >= k && (n*8) % m == 0) {
        cout << "TRUE" << endl;
    }
    else {
        cout << "FALSE" << endl;
    }
}