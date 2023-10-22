#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main () {
    //freopen("cbarn.in", "r", stdin);
    //freopen("cbarn.out", "w", stdout);
    int rooms;
    cin >> rooms;
    int total = 0; int temp = 0;
    vector<int> v(2*rooms);
    for (int i = 0; i < rooms; i++) {
        cin >> v[i];
    }
    v[rooms, 2*rooms - 1] = v[0, rooms];
    for (int j = 0; j < rooms; j++) {
        for (int k = j; k < j + rooms; k++) {
            
        }
    }

    //Check which leads to the smallest total, multiply each index of v by an increasing number and add them all up,
    //compare sums for the smallest. 
}