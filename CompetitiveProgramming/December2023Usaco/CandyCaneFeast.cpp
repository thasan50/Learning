#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
int main() {
    int N; int M; int k = 0;
    cin >> N >> M;
    vector<ll> cows(N);
    while (k < N) {
        cin >> cows[k]; k++;
    }
    vector<pair<ll, ll>> cane(M);
    k = 0;
    while (k < M) {
        cane[k].first = 0;
        cin >> cane[k].second;
        k++;
    }
    ll temp = 0;
    for (int i = 0; i < M; i++) { //i is cane
        for (int j = 0; j < N; j++) { //j is cow
            if (cane[i].first == cane[i].second) {
                break;
            }
            if (cows[j] > cane[i].first && cows[j] <= cane[i].second) {
                temp = cows[j];
                cows[j] += cows[j]-cane[i].first;
                cane[i].first = temp;
            }
            else if (cows[j] > cane[i].second) {
                cows[j] += cane[i].second - cane[i].first;
                cane[i].first = cane[i].second;
            }
        }
        
    }
    for (ll x: cows) {
        cout << x << endl;
    }
}