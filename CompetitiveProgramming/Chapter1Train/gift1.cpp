/*
ID: thasan31
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <map>
#include <cstdio>
using namespace std;

int main() {
    //freopen("gift1.in", "r", stdin);
    //freopen("gift1.out", "w", stdout);
    int NP; cin >> NP;
    map<string, int> m;
    for (int i = 0; i < NP; i++) {
        string temp;
        cin >> temp;
        m[temp] = 0;
    }
    for (int j = 0; j < NP; j++) {
        string temp; int value; int people;
        cin >> temp >> value >> people;
        m[temp] += (value % people);
        m[temp] -= value;
        for (int k = 0; k < people; k++) {
            cin >> temp;
            m[temp] += (value / people);
        }
    }
    for (const auto &x : m) {
        cout << x.first << " " << x.second << endl;
    }
    //Not working for reasons I don't understand
}