#include <iostream>
using namespace std;

int main() {
    //Number of 5s always exceeds the number of 2s
    int n; cin >> n;
    long long counter5 = 0;
    for (int i = 5; n/i >= 1; i*= 5) {
        counter5 += n/i;
    }
    cout << counter5 << endl;
    return 0;
}