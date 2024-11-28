#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t; //test cases
    for (int i = 0; i < t; i++) {
        int n, d, k; cin >> n >> d >> k; // number of days, visitor days, risky jobs
        vector<int> arr(n);
        int start, end = 0;
        for (int j = 0; j < k; j++) {
            cin >> start >> end;
            if (start - d >= 0) {
                arr[start-d]++; // Increment to show the start point
            }
            else {
                arr[0]++; // If start point is out of bounds, increment at 0
            }
            if (end < n) {
                arr[end]--; // Decrement to show the end point
            }
        }
        vector<int> arr2(n+1); // Create a vector that sums as it goes along
        int brother = 1; // Default is 1
        int brotherMax = 0;
        int mother = 1; // Default is 1
        int motherMin = 2147483627;
        for (int j = 0; j < n - d + 1; j++) {
            arr2[j+1] = arr2[j]+arr[j];
            if (brotherMax < arr2[j+1]) {
                brotherMax = arr2[j+1];
                brother = j+1;
            }
            if (motherMin > arr2[j+1]) {
                motherMin = arr2[j+1];
                mother = j+1;
            }
        }
        cout << brother << " " << mother << endl;
        
    }
    return 0;
}