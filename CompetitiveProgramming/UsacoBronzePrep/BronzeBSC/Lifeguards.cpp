#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int, int>> wP;
    int a, b;
    int mostRange = 0;
    int tempRange = 0;
    int iO = 0;
    int totalOverlapped = 0;
    int mostOverlapped = 0;
    pair<int, int> mostRemovable = make_pair(-1, -1);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        wP.push_back(make_pair(a,b));
    }
    for (int i = 0; i < n; i++) {
        pair<int, int> O = make_pair(wP[i].first, wP[i].second);
        for (int j = i+1; j < n; j++) {
            if (wP[i].second > wP[j].first && wP[i].first < wP[j].first) {
                if (O.second - wP[j].first > iO) {
                    iO = O.second - wP[j].first;
                    mostRemovable.first = wP[j].first;
                    mostRemovable.second = wP[j].second;
                }
                totalOverlapped += wP[i].second - wP[j].first;
                wP[i].second = wP[j].first;
            }
            else if (wP[j].second > wP[i].first && wP[j].first < wP[i].first) {
                if (O.first - wP[j].second > iO) {
                    iO = O.first - wP[j].second;
                    mostRemovable.first = wP[j].first;
                    mostRemovable.second = wP[j].second;
                }
                totalOverlapped += wP[j].second - wP[i].first;
                wP[j].second = wP[i].first;
            }
            else {
                continue;
            }
        }
        if (totalOverlapped > iO) {
            mostRemovable.first = O.first;
            mostRemovable.second = O.second;
        }
        else {
            //Finish this later, prioritize the rest
        }
        mostOverlapped = max(mostOverlapped, totalOverlapped);
        //Subtract overlap from length to determine most removable pair
        mostRange += max(0, O.second - O.first - totalOverlapped);
    }
}