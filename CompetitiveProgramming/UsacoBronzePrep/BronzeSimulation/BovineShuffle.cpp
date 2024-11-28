#include <cstdio>
#include <vector>
#include <iostream>
using namespace std;

int main () {
    freopen("shuffle.in", "r", stdin);
    freopen("shuffle.out", "w", stdout);
    int cows, position, ID;
    cin >> cows;
    vector<int> shuffle, order;
    vector<int> newOrder(cows);
    for (int i = 0; i < cows; i++) {
        cin >> position;
        shuffle.push_back(position);
    }
    for (int j = 0; j < cows; j++) {
        cin >> ID;
        order.push_back(ID);
    }
    for (int h = 0; h < 3; h++) {
        for (int k = 0; k < cows; k++) {
            newOrder[k] = order[shuffle[k] - 1];
        }
        order = newOrder;   
    }
    for (int l = 0; l < cows; l++) {
        cout << newOrder[l] << "\n";
    }
    return 0;
    //I UNDERSTAND NOW!
}