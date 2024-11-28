#include <cstdio>
#include <iostream>
using namespace std;

int main () {
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    int capacity[3] = {0,0,0};
    int content[3] = {0,0,0};
    for (int i = 0; i < 3; i++) {
        cin >> capacity[i] >> content[i];
    }
    for (int n = 0; n < 4; n++) {
        int r = n%3;
        int next = (n+1)%3;
        if (content[next] < capacity[next]) {
            if ((capacity[next]-content[next]) < content[r]) {
                content[r] -= (capacity[next]-content[next]);
                content[next] = capacity[next];
            }
            else {
                content[next] += content[r];
                content[r] = 0;
            }
        }
    }
    for (int x:content) {cout << x << "\n";}
}