#include <iostream>
#include <algorithm>
//#include <cstdio>
using namespace std;

int main() {
    //freopen("square.in", "r", stdin);
    //freopen("square.out", "w", stdout);
    int pasture1[4]; int pasture2[4];
    for (int i = 0; i < 4; i++) {
        cin >> pasture1[i];
    }
    for (int i = 0; i < 4; i++) {
        cin >> pasture2[i];
    }
    int x = max(pasture2[2], pasture1[2]) - min(pasture2[0], pasture1[0]);
    int y = max(pasture2[3], pasture1[3]) - min(pasture2[1], pasture1[1]);
    cout << max(x, y)*max(x,y);
}