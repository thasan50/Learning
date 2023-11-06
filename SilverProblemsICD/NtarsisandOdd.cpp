#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool check = false;
    int index = -1;

    vector<int> v(n);
    vector<int> pre(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) {
            pre[i] = v[i];
        }
        else {
            pre[i] = v[i] + pre[i - 1];
            if (pre[i] % 2 == 1) {
                index = i;
            }
        }
        
    }
    cout << index;
}