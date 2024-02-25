#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/**
 * Find an HQ9+ program that outputs exactly the given text or return IMPOSSIBLE
 * if no solutions exist.
 * 
 * N: the number of lines of text
 * X: a list containing the lines of the text
 */
string solve(int N, vector<string> &X) {
    // YOUR CODE HERE
    string str = "";
    int beerDetector = 0;
    int accumulator = 0;
    unordered_map<string, int> beerScript;
    beerScript["99 bottles of beer on the wall, 99 bottles of beer."] = 1;
    beerScript["Take one down and pass it around, 98 bottles of beer on the wall."] = 2;
    beerScript["98 bottles of beer on the wall, 98 bottles of beer."] = 3;
    beerScript["Take one down and pass it around, 97 bottles of beer on the wall."] = 4;
    beerScript["97 bottles of beer on the wall, 97 bottles of beer."] = 5;
    beerScript["Take one down and pass it around, 96 bottles of beer on the wall."] = 6;
    for (string a: X) {
        if (a == "Hello, world!") {
            str += "H";
        }
        else if (beerScript.find(a) != beerScript.end()) {
            beerDetector++;
            if (beerDetector == 6) {
                str += 9;
                beerDetector = 0;
            }
        }
        
    }
    return str;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cin.get();
        vector<string> X(N);
        for (int j = 0; j < N; j++) {
            getline(cin, X[j]);
        }
        cout << solve(N, X) << '\n';
    }
}