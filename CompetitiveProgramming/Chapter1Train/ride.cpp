/*
ID: thasan1
PROG: ride
LANG: C++
*/

#include <iostream>
#include <cstdio>
#include <map>
using namespace std;

int main() {
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    map<char, int> m;
    m['A'] = 1; m['B'] = 2; m['C'] = 3; m['D'] = 4;
    m['E'] = 5; m['F'] = 6; m['G'] = 7; m['H'] = 8;
    m['I'] = 9; m['J'] = 10; m['K'] = 11; m['L'] = 12;
    m['M'] = 13; m['N'] = 14; m['O'] = 15; m['P'] = 16;
    m['Q'] = 17; m['R'] = 18; m['S'] = 19; m['T'] = 20;
    m['U'] = 21; m['V'] = 22; m['W'] = 23; m['X'] = 24;
    m['Y'] = 25; m['Z'] = 26; 
    string ufo; cin >> ufo;
    string group; cin >> group;
    int temp1 = 1; int temp2 = 1;
    for (int i = 0; i < ufo.size(); i++) {
        temp1 *= m[ufo[i]];
    }
    for (int j = 0; j < group.size(); j++) {
        temp2 *= m[group[j]];
    }
    if (temp1 % 47 == temp2 % 47) {
        cout << "GO" << endl;
    }
    else {
        cout << "STAY" << endl;
    }
    return 0;
}