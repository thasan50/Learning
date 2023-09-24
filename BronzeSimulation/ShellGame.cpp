#include <cstdio>
#include <iostream>
#include <array>
#include <string>
using namespace std;

int main () {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int swaps;
    string first {"1"};
    string second {"2"};
    string third {"3"};
    long long counter[3] = {0,0,0};
    string temp{};
    cin >> swaps;
    //You can remove whitespace through a certain string command, look at that
    for (int i = 0;  i < swaps; i++) {
        getline(cin >> ws, temp);
        if (first[0] == temp[0]) {
            first[0] = temp[2];
        } 
        else if (first[0] == temp[2]) {
            first[0] = temp[0];
        }
        if (second[0] == temp[0]) {
            second[0] = temp[2];
        } 
        else if (second[0] == temp[2]) {
            second[0] = temp[0];
        }
        if (third[0] == temp[0]) {
            third[0] = temp[2];
        } 
        else if (third[0] == temp[2]) {
            third[0] = temp[0];
        }
        if (first[0] == temp[4]) {counter[0] += 1;}
        if (second[0] == temp[4]) {counter[1] += 1;}
        if (third[0] == temp[4]) {counter[2] += 1;}
    }
    if (counter[0] >= counter[1] and counter[0] >= counter[2]) {
        cout << counter[0];
    }
    else if (counter[1] >= counter[0] and counter[1] >= counter[2]) {
        cout << counter[1];
    }
    else {
        cout << counter[2];
    }
    //Now find whether c_1st, c_2nd, or c_3rd is greater.
    /*I've been focused on the idea of a vector array, but why
    don't I just make it a vector of strings instead? Same
    purpose basically, and no need to find a work around. */
}
