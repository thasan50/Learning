#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        int n; cin >> n;
        set<int> hayTypes; //Types of hay being considered
        vector<int> cows; //Cows that favor each hay
        for (int j = 0; j < n; j++) {
            int temp; cin >> temp;
            cows.push_back(temp); //Raw data
            hayTypes.insert(temp); //Filters out repeats
        }
        int value = hayTypes.size(); //For later usage to see if it changed or not
        bool printed = false; //For spacing related issues
        set<int> answer;
        for (int h = 0; h < n; h++) {
            if ((cows[h] == cows[h+1] || cows[h] == cows[h+2]) //If there are two consecutive 
            && hayTypes.count(cows[h]) == 1) { //of the same or two surround one, then it's possible
                answer.insert(cows[h]);
                hayTypes.erase(cows[h]);
            }
        }
        set<int>::iterator itr;
        for (itr = answer.begin(); itr != answer.end(); itr++) {
            if (itr == answer.begin()) {
                cout << *itr;
            }
            else {
                cout << " " << *itr;
            }
        }
        if (hayTypes.size() == value) { //meaning it hasn't changed
            cout << -1; //No hay is dominant
        }
        cout << endl; //Spacing
    }

}