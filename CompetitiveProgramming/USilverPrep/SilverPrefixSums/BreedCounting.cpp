#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int n; int q; cin >> n >> q;
    vector<int> holsteins(n+1);
    vector<int> guernseys(n+1);
    vector<int> jerseys(n+1);
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        holsteins[i+1] = holsteins[i];
        guernseys[i+1] = guernseys[i];
        jerseys[i+1] = jerseys[i];
        if (temp == 1) {
            holsteins[i+1]++;
        }
        else if (temp == 2) {
            guernseys[i+1]++;
        }
        else if (temp == 3) {
            jerseys[i+1]++;
        }
    }
    for (int i = 0; i < q; i++) {
        int a, b;
        cin >> a >> b;
        cout << holsteins[b] - holsteins[a - 1] << " " << guernseys[b] - guernseys[a - 1] << " " << jerseys[b] - jerseys[a - 1] << endl;
    }
    return 0;
}