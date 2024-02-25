#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

int main() {
    freopen("div7.in", "r", stdin);
    freopen("div7.out", "w", stdout);
    int n; cin >> n;
    vector<long long> sums(n+1);
    for (int i = 0; i < n; i++) {
        int val; cin >> val;
        sums[i+1] = (val + sums[i]) % 7;
    }
    vector<int> remainders(7, -1);
    int ans = 0;
    for (int i = 0; i < n + 1; i++) {
        if (remainders[sums[i]] == -1) {
            remainders[sums[i]] = i;
        }
        else {
            ans = max(i - remainders[sums[i]], ans);
        }
    }
    cout << ans;
    //Let's break this down, I don't understand the %7 part. My old solution did not work.
    /* So to start off with, we're initializing an array with a size one greater than the number of inputs.
    That becomes our prefix array and each position is equal to the value being input plus the previous pos.
    % 7 is done, making each value in the prefix show the remainder. If the remainder is 0, then that should
    mean the sum of all the numbers up until that point is 0. If it's another number, then that means that if
    there's another prefix sum with the same number and we only include the cows between those two sums, then
    that will result in a group whose total is divisible by 7. So far so good. Now, we set a new array to check
    for the first occurence of each remainder in the prefix sum. Until it appears / if it doesn't appear at all,
    it will have a value of -1. That way, we can know that there's no point in checking that specific combination
    against anything else just yet. However, if we do find that specific remainder, like say the remainder 3 for 
    example, and then we find another remainder corresponding to it, we'll check the maximum distance (number of
    cows involved) between the two positions against the existing maximum distance. This way, we save a lot of
    trouble and that double for loop nonsense. The idea of using the remainders as indices and having the actual
    values corresponding to those indices hold the indices in the prefix array is pretty interesting. I'll keep
    that in mind for the future.
    */
}