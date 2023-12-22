#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    //freopen("lineup.in", "r", stdin);
    //freopen("lineup.out", "w", stdout);
    int N; cin >> N;
    vector<string> vect(N);
    for (int i = 0; i < N; i++) {
        getline(cin, vect[i]);
        cin.ignore(1, '\n');
        cout << vect[i] << endl;
    }
    vector<string> names{"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy","Sue"};

}