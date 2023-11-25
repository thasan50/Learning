#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main () {
    int cases; cin >> cases;
    int length, target;
    bool valid = true;
    vector<int> finala;
    vector<int> finalb;
    for (int i = 0; i < cases; i++) {
        cin >> length >> target;
        multiset<int> a;
        multiset<int> b;
        int input;
        for (int j = 0; j < length; j++) {
            cin >> input; a.insert(input);
        }
        for (int k = 0; k < length; k++) {
            cin >> input; b.insert(input);
        }
        for (auto& itr: a) {
            finala.push_back(itr);
        }
        for (auto& itr: b) {
            finalb.push_back(itr);
        }
        while (valid == true) {
            int z = 0;
            if (finalb[z] >= finala[z]) {
                valid = false;
                cout << "NO" << endl;
            }
            else if (z == length - 1) {
                for (auto& itr: finalb) {
                    cout << itr << " ";
                }
                cout << endl;
                valid = false;
            }
            z++;
        }
        valid = true;
    }
}