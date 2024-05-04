#include <iostream>
using namespace std;

int main() {
    string text = "";
    cin >> text;
    string n = "0 0 0 0 0 0 0 0 0";
    cout << n;
    cin >> text;
    char a;
    while (text == "OBSERVE") {
        cin >> n;
        cout << endl;
        cin >> a;
        if (a == 'G') {
            if (n[4] == '9') {
                if (n[2] == '9') {
                    n[0]++;
                    n[2] = '0';
                }
                else {
                    n[2]++;
                }
                n[4] = '0';
            }
            else {
                n[4]++;
            }
        }
        if (a == 'S') {
            if (n[10] == '9') {
                if (n[8] == '9') {
                    n[6]++;
                    n[8] = '0';
                }
                else {
                    n[8]++;
                }
                n[10] = '0';
            }
            else {
                n[10]++;
            }
        }
        if (a == 'B') {
            if (n[16] == '9') {
                if (n[14] == '9') {
                    n[12]++;
                    n[14] = '0';
                }
                else {
                    n[14]++;
                }
                n[16] = '0';
            }
            else {
                n[16]++;
            }
        }
        cin >> text;
    }
    string final = "";
    int gold = 100*int(n[0] - '0') + 10*int(n[2] - '0') + int(n[4] - '0');
    int silver = 100*int(n[6] - '0') + 10*int(n[8] - '0') + int(n[10] - '0');
    int bronze = 100*int(n[12] - '0') + 10*int(n[14] - '0') + int(n[16] - '0');
    if (min(min(gold, silver), bronze) == gold) {
        final += 'G';
        if (min(silver, bronze) == silver) {
            final += 'S';
            final += 'B';
        }
        else {
            final += 'B';
            final += 'S';
        }
    }
    else if (min(min(gold, silver), bronze) == silver) {
        final += 'S';
        if (min(gold, bronze) == gold) {
            final += 'G';
            final += 'B';
        }
        else {
            final += 'B';
            final += 'G';
        }
    }
    else {
        final += 'B';
        if (min(silver, gold) == gold) {
            final += 'G';
            final += 'S';
        }
        else {
            final += 'S';
            final += 'G';
        }
    }
    cout << final << endl;

}

