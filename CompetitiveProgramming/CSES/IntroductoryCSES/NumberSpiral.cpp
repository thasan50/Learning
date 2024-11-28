#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (long long int current = 1; current <= t; current++) {
        long long int arr[2];
        cin >> arr[0] >> arr[1];
        if (arr[0] > arr[1]) {
            if (arr[0] % 2 == 0) {
                arr[0] *= arr[0];
                cout << arr[0] - arr[1] + 1 << endl;
            }
            else {
                arr[0] = (arr[0]-1)*(arr[0]-1);
                cout << arr[0] + arr[1]<< endl;
            }
        }
        else {
            if (arr[1] % 2 == 1) {
                arr[1] *= arr[1];
                cout << arr[1] - arr[0] + 1 << endl;
            }
            else {
                arr[1] = (arr[1]-1)*(arr[1]-1);
                cout << arr[1] + arr[0] << endl;
            }
        }
    }
    /*Based on whether the row number or column number is higher, you determine which to start from.
    If the row number is even, then you start with the perfect square of that number and decrease until you 
    reach the column number. If the row number is odd, you start with 1+ the perfect square of the previous 
    number and add until you reach the column number.
    If the column number is odd, then you start with the perfect square of that number and decrease until you
    reach the row number. If the column number is even, you start with 1+ the perfect square of the previous
    number and add until you reach the column number.*/
    return 0;
}