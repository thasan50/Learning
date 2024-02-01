#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    //Do this after contest
    int n = 0; cin >> n;
    vector<int> pos;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        pos.push_back(temp);
    }
    sort(pos.begin(), pos.end());
    int counter = 1; int maxi = 1;
    int temp2;
    for (int i = 0; i < n; i++) {
        if (i == 0 && pos[i+1] - pos[i] == 1) {
            temp2 = i;
            while (true) {
                if (pos[temp2+1] - pos[temp2] <= temp2 + 1) {
                    counter++;
                }
                else {
                    break;
                }
                temp2++;
            }
            maxi = max(counter, maxi);
        }
    }
}