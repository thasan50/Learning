#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //freopen("traffic.in", "r", stdin);
    //freopen("traffic.out", "w", stdout);
    int n; 
    cin >> n;
    vector<string> ramp(n);
    vector<pair<int, int>> range(n);
    pair<int,int> standard = {0,0};
    pair<int,int> adjustoff = {0,0};
    pair<int,int> adjuston = {0,0}; 
    for (int i = 0; i < n; i++) {
        cin >> ramp[i] >> range[i].first >> range[i].second;
    }
    for (int j = 0; j < n; j++) {
        if (ramp[j] == "none") {
            if (standard.second == 0) {
                standard.first = range[j].first;
                standard.second = range[j].second;
            }
            else {
                standard.first = standard.second - adjuston.second - adjustoff.second;
                standard.second = standard.second - adjuston.first - adjustoff.first;
                standard.first = max(standard.first, range[j].first);
                standard.second = min(standard.second, range[j].second);
            }
        } //Let's say the goal is after mile N. How do you manage?
        else if (ramp[j] == "on") {
            adjuston.first += range[j].first;
            adjuston.second += range[j].second;
        }
        else if (ramp[j] == "off") {
            adjustoff.first -= range[j].first;
            adjustoff.second -= range[j].second;
        }
    }
    cout << standard.first << " " << standard.second;
    //Take the maximum of the smaller and minimum of the larger
    /* First: How does finding the range for before mile 1 and after mile N work? If I don't understand that, I can't
    solve this problem. 
    on 1 1
    none 10 14
    none 11 15
    off 2 3
    Before mile 1: 10 13
    After mile N: 8 12
    */
   /*
   I'm thinking that maybe I need to retain the "pure" values for the highway, and then keep the on and off ramp
   stuff in a different pair for future reference. Retaining the pure values would need me to undo the effects
   that the on and off ramp have on those values, maybe twice. Keep on adjusting and do the max thing afterwards.*/

}