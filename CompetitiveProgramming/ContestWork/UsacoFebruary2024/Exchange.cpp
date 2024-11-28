#include <iostream>
#include <vector>
using namespace std;

int main() { //Felt distasteful doing this
    int n; int m; 
    cin >> n >> m;
    string d; cin >> d; 
    int total = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    vector<int> cap(v.begin(), v.end());
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (d[j] == 'L' && j != 0) {
                v[j-1] += 1;
                v[j] -= 1;
            }
            else if (d[j] == 'L' && j == 0) {
                v[n-1] += 1;
                v[0] -= 1;
            }
            else if (d[j] == 'R' && j != n - 1) {
                v[j+1] += 1;
                v[j] -= 1;
            }
            else if (d[j] == 'R' && j == n - 1) {
                v[0] += 1;
                v[n-1] -= 1;
            }
        }
        for (int k = 0; k < n; k++) {
            if (v[k] > cap[k])  {
                v[k] = cap[k];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        total += v[i];
    }
    cout << total;
}