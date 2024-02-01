#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main () {
    int n, s; cin >> n >> s;
    vector<pair<int, int>> line; //Type and value of the positions on number line
    int totalTargets = 0; // Do I need this?
    for (int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;
        if (a == 1) {
            totalTargets++;
        }
        pair<int, int> pos = make_pair(a,b);
        line.push_back(pos); //Taking in input
    }
    int current = 0; //Total targets destroyed
    int power = 1; //Power of jumps
    if (line[s - 1].first == 0) { 
        power += line[s-1].second; //Increment power (still positive here)
        power *= -1; //Reverse direction
    }
    else {
        line[s - 1].first = 2; //Make target destroyed, no interactions
        current++; //Increment destroyed targets, no chance of it hitting a destroyed one because this is the first
    }
    while (s + power <= n && s + power >= 1) {
        s += power; //Increment position
        if (line[s - 1].first == 0) { //Is it a bounce pad?
            if (power < 0) { //Is power negative?
                power -= line[s - 1].second; //Then decrement
            }
            else { //Is power positive?
                power += line[s - 1].second; //Then increment
            }
            power *= -1; //Reverse direction
        }
        else if (line[s - 1].first == 1 && line[s - 1].second <= abs(power)) { //Is it a target? Is value reached?
            line[s - 1].first = 2; //Break target
            current++; //Increment broken counter
        }
    }
    cout << current; //Output broken counter
    /* Aside from the issue of this somehow continuing forever(even though I don't see how that's possible),
    there must be another big error somewhere. Otherwise it shouldn't be possible to get the wrong answer. Maybe
    power becomes too big, so we need to give it a larger variable? That didn't change much.

    */
}