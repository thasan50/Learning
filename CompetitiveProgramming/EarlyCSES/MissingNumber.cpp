#include <iostream>
using namespace std;
//success
int main() {
    int64_t n;
    cin >> n;
    int64_t total = n*(n+1)/2, total2 = 0, arr[n-1];
    for (int64_t x=0; x<n-1; x++) {
        cin >> arr[x];
        total2 += arr[x];
    }
    cout << total - total2;
    return 0;
}