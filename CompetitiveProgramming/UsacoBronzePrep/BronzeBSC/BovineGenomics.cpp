#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;

int main() {
    freopen("cownomics.in", "r", stdin);
    freopen("cownomics.out", "w", stdout);
    int n, m; cin >> n >> m;
    vector<string> spotted(n);
    vector<string> spotless(n);
    for (int i = 0; i < n; i++) {
        cin >> spotted[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> spotless[i];
    }
    int counter = 0;
    
    for (int i = 0; i < m; i++) {
        vector<bool> characters(4);
        for (int j = 0; j < n; j++) {
            if (spotted[j][i] == 'A') {characters[0] = true;}
            else if (spotted[j][i] == 'T') {characters[1] = true;}
            else if (spotted[j][i] == 'G') {characters[2] = true;}
            else if (spotted[j][i] == 'C') {characters[3] = true;}
        }
        for (int k = 0; k < n; k++) {
            if (spotless[k][i] == 'A' && characters[0] == true) {break;}
            else if (spotless[k][i] == 'T' && characters[1] == true) {break;}
            else if (spotless[k][i] == 'G' && characters[2] == true) {break;}
            else if (spotless[k][i] == 'C' && characters[3] == true) {break;}
            if (k == n - 1) {counter++;}
        }
    }
    cout << counter;
}