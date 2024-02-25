#include <iostream>
#include <vector>
using namespace std;
int main () {
    int cases; cin >> cases;
    int size;
    for (int i = 0; i < cases; i++) {
        cin >> size;
        vector<int> temp(size);
        for (int j = 0; j < size; j++) {
            cin >> temp[j];
        }
        if (temp[0] != 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }
}