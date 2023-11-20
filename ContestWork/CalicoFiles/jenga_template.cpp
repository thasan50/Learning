#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

/**
* Return the number of unique Jenga towers that can be built using N or fewer
* bricks. Give your answer modulo 3359232.
* 
* N: the maximum number of bricks to use
*/
ll solve(ll N) {
    // YOUR CODE HERE
    ll use = N - N%3;
    ll output = 2*(1-pow(2, use/3)) / (1-2);
    ll divisor = pow(2, 9) * pow(3, 9);
    return output % divisor;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        ll N;
        cin >> N;
        cout << solve(N) << '\n';
    }
}