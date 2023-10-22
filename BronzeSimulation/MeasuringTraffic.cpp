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
    pair<int,int> standard = {-1,-1};
    pair<int,int> adjust = {0,0};
    for (int i = 0; i < n; i++) {
        cin >> ramp[i] >> range[i].first >> range[i].second;
    }
    for (int j = 0; j < n; j++) {
        if (ramp[j].length() == 4) {
            if (standard.second == -1) {
                standard.first = range[j].first - adjust.second;
                standard.second = range[j].second - adjust.first;
            }
            else {
                standard.first = max(standard.first, range[j].first - adjust.second);
                standard.second = min(standard.second, range[j].second - adjust.first);
            }
            if (standard.first < 0) {
                    standard.first = 0;
                }
            if (standard.second < 0) {
                    standard.second = 0;
                }
        } 
        if (ramp[j].length() == 2) {
            adjust.first += range[j].first;
            adjust.second += range[j].second;
        }
        if (ramp[j].length() == 3) {
            adjust.first -= range[j].first;
            adjust.second -= range[j].second;
        }
    }
    cout << standard.first << " " << standard.second << "\n";
    cout << standard.first + adjust.second << " " << standard.second + adjust.first << "\n";
    /* Rules:
    To find the range before mile 1, you need to remove the effects of all the on and off ramps throughout the highway
    while retaining the accurate range of the traffic on the main highway (you use the different unaltered ranges to 
    narrow down the most accurate original one).
    If you have an on/off ramp on mile 1 or just have them before any main highway and you want to find what is after
    mile n, removing them and then trying to reapply them might harm your calculations. If you have it on mile N or
    after your last main highway, then use the last main highway to calculate what is before mile 1 rather than trying
    to remove and reapply. At least, something is going wrong with my current calculations and it's because of that.
    3
    on 3 7
    none 5 5 
    off 3 7
    8 12 for after mile n
    0 2 for before mile n
    How would I go about reapplying these after? Wait what, why would  
    */
}