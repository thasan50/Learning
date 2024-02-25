#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int k, n;
    cin >> k >> n; //Taking in number of sessions and number of cows
    int counter = 0; //Total consistent pairs
    vector<vector<int>> s; //Take in input, rankings in each session
    for (int i = 0; i < k; i++) {
        vector<int> one; //Temporary vector
        int temp; //Temporary variable
        for (int j = 0; j < n; j++) { 
            cin >> temp; //Take in each cow
            temp--; //Rescale it so we can use them as indexes later, going to make a table and check all intersections
            one.push_back(temp); //Insert variable into vector
        }
        s.push_back(one); //Insert vector into big vector
    }
    vector<vector<int>> table(n, vector<int>(n)); //Table of all possible pairs, including reflexive pairs
    for (int i = 0; i < k; i++) { //Loop of sessions
        for (int j = 0; j < n; j++) { //Loop of first cow
            for (int h = j + 1; h < n; h++) { //Loop of second cow (will never overlap)
                table[s[i][j]][s[i][h]]++; 
            } /* So basically what this tells us is that for each session (i), we're going to check each individual
            cow and the cows in front of it. The individual is j, the following cows are encompassed by h loop.
            Since we know that the individual is ahead of the following ones, we can increment that intersection 
            square in the table. Everytime we increment, we get closer to seeing whether or not a pattern is consistent
            throughout the sessions.
            */
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (table[i][j] == k) {
                counter++; //Basically the tail end of what I said above.
            }
        }
    }
    cout << counter;
}