#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main () {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int N; cin >> N;
    int smallest = 1000000000; int counter = 0;
    vector<int> cows(N);
    for (int i = 0; i < N; i++) {
        cin >> cows[i];
    }
    for (int start = 0; start < N; start++) {
        for (int pos = 0; pos < N; pos++) {
            counter += pos * cows[(start+pos)%N];
        }
        if (counter < smallest) {
            smallest = counter;
        }
        counter = 0;
    }
    cout << smallest;
}