#include <iostream>
using namespace std;
//success
int main() {
    long long int n;
    cin >> n;
    long long int arr[n-1];
    for (long long int x = 0; x<n; x++) {
        arr[x] = x+1;
    }

    if (n > 4 || n==4) {
        for (long long int y = 1; y<n; y = y+2) {
            if (n%2 == 0 && y == n-1) {
                cout << arr[y] << " ";
                y = 0;
                }
            if (n%2 == 1 && y == n-2) {
                cout << arr[y] << " ";
                y = 0;
                }
            cout << arr[y] << " ";
        }
    }
    //had to brute force this part
    if (n == 1) {
        cout << 1 << " ";
    }
    if (n<4) {
        cout << "NO SOLUTION" << endl;
    }
    return 0;
}