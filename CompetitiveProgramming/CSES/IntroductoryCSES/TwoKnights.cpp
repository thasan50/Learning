#include <iostream>
using namespace std;

int main () {
    long long n, total, possible_attacks;
    cin >> n;
    for (long long i=1; i<=n; i++) {
        total = (i*i)*(i*i-1)/2;
        possible_attacks = 2*(i-1)*(i-2) + 2*(i-1)*(i-2);
        cout << total - possible_attacks << endl;
    }
    return 0;
}