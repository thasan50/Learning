#include <cstdlib>
#include <cstdio>
#include <iostream>
using namespace std;

int main () {
    freopen("lostcow.in", "r", stdin);
    freopen("lostcow.out", "w", stdout);
    int x, y, movement, total, pos, prev_pos;
    cin >> x >> y;
    pos = x; movement = 1; total = 0;
    while (pos != y) {
        prev_pos = pos;
        pos = x + movement;
        if (y < x && pos < y) {
            total = total + abs(y - prev_pos);
            pos = y;
        }
        else if (y > x && pos > y) {
            total = total + abs(y - prev_pos);
            pos = y;
        }
        else {
            total += abs(pos - prev_pos);
        }
        movement *= -2;
    }
    cout << total;


}