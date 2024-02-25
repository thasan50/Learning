#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int swaps; cin >> swaps;
    int counter[] = {0,0,0};
    int location[] = {1, 2, 3};
    int a, b, g;
    for (int i = 0; i < swaps; i++) {
        cin >> a >> b >> g;
        if (location[0] == a) {
            location[0] = b;
        }
        else if (location[0] == b) {
            location[0] = a;
        }
        if (location[1] == a) {
            location[1] = b;
        }
        else if (location[1] == b) {
            location[1] = a;
        }
        if (location[2] == a) {
            location[2] = b;
        }
        else if (location[2] == b) {
            location[2] = a;
        }
        if (location[0] == g) {
            counter[0]++;
        }
        if (location[1] == g) {
            counter[1]++;
        }
        if (location[2] == g) {
            counter[2]++;
        }
    }
    cout << max(max(counter[0], counter[1]), counter[2]);
}
