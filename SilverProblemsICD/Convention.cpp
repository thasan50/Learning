#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main () {
    int N, M, C;
    cin >> N >> M >> C;
    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
}