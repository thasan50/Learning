#include <iostream>
#include <cstdio>
#include <map>
#include <iterator>
using namespace std;

int main () {
    //freopen("speeding.in", "r", stdin);
    //freopen("speeding.out", "w", stdout);
    int n, m, infraction;
    infraction = 0;
    cin >> n >> m;
    int sl, sd; int rl = 0; int lt = 0;
    int tempRL = 0; int tempLT = 0;
    //road_length, speed_limit, length_traveled, speed_driven
    map<int, int> Road;
    map<int, int> Bessie;
    for (int i = 0; i < n; i++) {
        cin >> tempRL >> sl;
        rl += tempRL;
        Road[rl] = sl;
    }
    for (int j = 0; j < m; j++) {
        cin >> tempLT >> sd;
        lt += tempLT;
        Bessie[lt] = sd;
    }
    map<int, int> :: iterator it;
    for (auto &x : Road) {
        it = Bessie.lower_bound(x.first);
        if (it->second - x.second > infraction) {
            infraction = it->second - x.second;
        }
    }
    /*I want to make a range, since this lower bound
    only accounts for the latest segment rather than
    all of them. 
    Check for keys in bessie with a value in between
    present key and next key in road.
    Check for everything that falls below the current
    key value in road and above the previous one. How?
    You can use temp = prev(x, 1). If a length from
    Bessie is greater than or equal to temp.first but
    less than x, then check that length. */

    cout << infraction;
}