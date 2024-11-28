#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    int n; cin >> n;
    vector<char> FJ(n);
    vector<int> hPoints(n+1);
    vector<int> sPoints(n+1);
    vector<int> pPoints(n+1);
    for (int i = 0; i < n; i++) { ///I managed to get this part
        cin >> FJ[i];
        hPoints[i+1] = hPoints[i];
        sPoints[i+1] = sPoints[i];
        pPoints[i+1] = pPoints[i];
        if (FJ[i] == 'H') {
            hPoints[i+1]++;
        }
        else if (FJ[i] == 'S') {
            sPoints[i+1]++;
        }
        else if (FJ[i] == 'P') {
            pPoints[i+1]++;
        }
    }
    int ans = 0;
    for (int i = 1; i < n+1; i++) {//And this part is actually very simple
        int before = max({hPoints[i], sPoints[i], pPoints[i]});
        int after = max({hPoints[n]-hPoints[i], sPoints[n]-sPoints[i], pPoints[n]-pPoints[i]});
        ans = max(ans, before+after);
    }
    cout << ans;
    /* So the logic behind it is that instead of simulating every possible path in O(n^2), we can just take 
    the maximum before part and the maximum after part over the total number of games. Since we can match
    any pair, we can just choose the section that is greatest for the first part and match it to whatever
    is greatest for the second part. I imagine it would be a little harder if they couldn't repeat, but
    not by much.
    Note that if you want max to work for more than two values, you need to put it in list form.
    Also remember that in a prefix array, each value is equal to the onebefore it on top of the stuff that;s
    being added in. Don't forget about the first part.
    */
    


}