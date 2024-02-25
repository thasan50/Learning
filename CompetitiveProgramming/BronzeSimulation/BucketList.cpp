#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
//#include <unordered_map> 
using namespace std;

const int MaxTime = 1000;

int main () {
    freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n; cin >> n;
    int start, end, buckets;
    vector<int> change(MaxTime, 0);
    for (int i = 0; i < n; i++) {
        cin >> start >> end >> buckets;
        change[start] += buckets;
        change[end] -= buckets;
    }
    int current = 0;
    int most = 0;
    for (int j = 0; j < MaxTime; j++) {
        current += change[j];
        most = max(most, current);
    }
    cout << most;









    /*This below is a solution I wanted to use, but wasn't smart enough to figure out. Instead, I'm gonna use the
    solution that everyone else is going with, checking the number of buckets needed at every moment. It's probably
    more efficient too, but it really bugs me that I couldn't figure out how to work this thing out. Maybe with
    some more fine tuning... but alas. Too full of holes to work out.*/

    /*freopen("blist.in", "r", stdin);
    freopen("blist.out", "w", stdout);
    int n, tempStart, tempEnd, tempBuckets;
    int total = 0;
    cin >> n;
    vector<int> Start, End, Buckets;
    unordered_map<int, int> Bigshot;
    for (int i = 0; i < n; i++) {
        cin >> tempStart >> tempEnd >> tempBuckets;
        Start.push_back(tempStart);
        End.push_back(tempEnd);
        Buckets.push_back(tempBuckets);
        }
    for (int j = 0; j < n; j++) {
        auto itr = upper_bound(Start.begin(), Start.end(), End[j]);
        if (itr == Start.end()) {
            continue;
        }
        if (Bigshot.find(*itr) != Bigshot.end()) {
            Bigshot[*itr] += Buckets[j];
            continue;
        }
        Bigshot[*itr] = Buckets[j];
    }
    for (auto it = Bigshot.begin(); it != Bigshot.end(); it++) {
        total = total + max(it->first, it->second);
    }
    cout << total; */
}

