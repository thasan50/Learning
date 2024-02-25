#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> levels;
    for (int i = 0; i < n; i++) {
        int temp; cin >> temp;
        levels.push_back(temp);
    }
    int counter = 0;
    for (int i = 0; i < n; i++) {
        int temp = levels[i];
        if (levels[i] > 0) {
            for (int j = 0; j < n; j++) {
                levels[i + j] -= (temp + j);
                counter++;
            }
        }
        else if (levels[i] < 0) {
            for (int k = 0; k < n; k++) {
                levels[i + k] += (temp + k);
                counter++; //Oh bruh the issue was with counter's increment. Damn it, I realized too late
            }
        }
        else {
            continue;
        }
    }
    cout << counter;
}