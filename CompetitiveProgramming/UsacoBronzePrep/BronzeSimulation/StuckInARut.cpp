#include <iostream>
#include <cstdio>
#include <vector>
#include <array>
#include <algorithm>
using namespace std;

int main() {
    int n; cin >> n;
    vector<array<int, 3>> east;
    vector<array<int, 3>> north;
    char dir; int xcor; int ycor;
    for (int i = 0; i < n; i++) {
        cin >> dir >> xcor >> ycor;
        array<int, 3> temp = {xcor, ycor, i};
        if (dir == 'E') {
            east.push_back(temp);
        }
        else {
            north.push_back(temp);
        }
    }
    vector<vector<int>> intersection;
    for (int i = 0; i < east.size(); i++) {
        for (int j = 0; j < north.size(); j++) {
            //What's the reasoning behind this section? Puzzle it out.
            //So that we see which one crosses the others path, or if they reach the same spot at the same time
            int xtime = north[j][0] - east[i][0];
            int ytime = east[i][1] - north[j][1];
            if (xtime == ytime) {
                continue;
            }
            else if (ytime > xtime && xtime > 0)  {
                intersection.push_back({xtime, north[j][2], east[i][2], 0});
            }//xtime collides first, north[j][2] is cow that collides with east[j][2] trail, 0 to show it's xtime
            else if (xtime > ytime && ytime > 0) {
                intersection.push_back({ytime, east[i][2], north[j][2], 1});
            }//ytime collides first, east[j][2] is cow that collides with north[j][2] trail, 1 to show it's ytime
        }
    }
    sort(intersection.begin(), intersection.end());
    vector<int> ans(n, 1e9);
    //Okay I'm gonna stop here because this problem is getting seriously annoying. There are more topics to review
    //and I can't spend all my time preparing for a worst case scenario before addressing the most common ones.
    //Come back after promotion to silver

}