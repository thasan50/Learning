#include <iostream>
using namespace std;
//success
int main () {
    long long int n;
    cin >> n;
    long long int min = 0;
    long long int arr[n];
    for (long long int x = 0; x < n; x++) {
        cin >> arr[x];
        if (x>0) {
            while (arr[x] < arr[x-1]) {
                arr[x] = arr[x] + 1;
                min++;
            }
        }
    }
    cout << min;
    return 0;
}