#include <iostream>
#include <cstdio>
using namespace std;

int main () {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    int lawn[4]; int food[4];
    cin >> lawn[0] >> lawn[1] >> lawn[2] >> lawn[3];
    cin >> food[0] >> food[1] >> food[2] >> food[3];
    int total_area = (lawn[2]-lawn[0])*(lawn[3]-lawn[1]);
    if (food[2] >= lawn[2] && food[0] <= lawn[0] && (food[3] >= lawn[3] || food[1]<=lawn[1])) {
        int x1 = max(0, lawn[2] - lawn[0]);
        int y1 = max(0, min(food[3], lawn[3]) - max(food[1], lawn[1]));
        total_area -= x1*y1;
    }
    else if (food[3] >= lawn[3] && food[1] <= lawn[1] && (food[2]>=lawn[0]||food[0]<=lawn[2])) {
        int y2 = max(0, lawn[3] - lawn[1]);
        int x2 = max(0, min(food[2], lawn[2]) - max(food[0], lawn[0]));
        total_area -= x2*y2;
    }
    cout << total_area;
}