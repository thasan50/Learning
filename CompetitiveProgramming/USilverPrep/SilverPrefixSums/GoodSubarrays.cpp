#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        int viable = 0; //number of viable subarrays
        string a; cin >> a;
        int arr[100001] = {};
        for (int j = 1; j <= n; j++) {
            arr[j] += a[j-1] - '0';
            arr[j] += arr[j-1];
        }
        for (int j = 1; j <= n; j++) {
            for (int k = j; k <= n; k++) {
                if (arr[k] - arr[j-1] > k-j+1) {
                    k += (arr[k]-arr[j-1]) - (k-j+1) - 1;
                }
                else if (k-j+1 == arr[k] - arr[j-1]) {
                    viable++;
                }
            }
        }
        cout << viable << endl;
    }
}