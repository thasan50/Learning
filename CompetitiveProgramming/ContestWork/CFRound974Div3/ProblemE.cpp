#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Looks like a tree type of problem
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n, m, h; cin >> n >> m >> h;
        vector<int> horses(h);
        for (int j = 0; j < h; j++) {
            cin >> horses[j];
        }
        vector<int> v1(m);
        vector<int> v2(m);
        vector<int> time(m);
        for (int k = 0; k < m; k++) {
            cin >> v1[k] >> v2[k] >> time[k];
        }
        
    }
    return 0;
}