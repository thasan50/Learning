#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
    int N; cin >> N;
    vector<char> bits(N);
    string bitstring; cin >> bitstring;
    for (int i = 0; i < N; i++) {
        bits[i] = bitstring[i];
    }
    int counter = 0;
    ll maxi = 10000000000; //Start high, then find the smallest group of 1s. Maxi is actually a lie, it's mini
    int nights = 0;
    for (int j = 0; j < N; j++) {
        if (bits[j] == '1') {
            counter++;
        }
        else {//If it lands on a 0
            if (maxi > counter && counter != 0) { //So that it doesn't happen before it even reaches a 1
                maxi = counter;
            }
            counter = 0;
        }
    }
    if (counter != 0 && maxi > counter) {maxi = counter;} //This is if the last character was a 1
    nights = maxi / 2; maxi = 0; counter = 0;
    for (int k = 0; k < N; k++) {
        if (bits[k] == '1') {
            counter++;
        }
        else {
            if (counter % 2 == 0) {
                maxi += 2 * counter / (nights+1);
            }
            else {
                maxi += counter / (nights+1);
            }
            counter = 0;
        }
    }
    if (counter != 0) {//If the last character was a 1
        if (counter % 2 == 0) {
            maxi += 2 * counter / (nights+1);
        }
        else {
            maxi += counter / (nights+1);
        }
        counter = 0;
    }
    cout << maxi;
}