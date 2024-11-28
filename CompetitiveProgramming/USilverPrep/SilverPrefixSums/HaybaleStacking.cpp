#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    //freopen("stacking.in", "r", stdin);
    //freopen("stacking.out", "w", stdout);
    int n, k; 
    cin >> n >> k;
    vector<int> stacks(n);
    vector<int> prefix(n+1); 
    int a, b;
    for (int i = 0; i < k; i++) {
        cin >> a >> b;
        a--; b--; //Zero index
        stacks[a]++; //Will carry the one later
        stacks[b+1]--; //Shows that the range ended
    }
    for (int i = 1; i <= n; i++) {
        prefix[i] += stacks[i-1] + prefix[i-1];
    }
    sort(prefix.begin() + 1, prefix.end());
    cout << prefix[n/2+1] << endl;
    return 0;
}