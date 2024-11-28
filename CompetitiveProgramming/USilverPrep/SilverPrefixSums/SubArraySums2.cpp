#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef long long ll;

int main() {
    int n, x; cin >> n >> x; //n integers in array, x is the target
    vector<int> input(n); //input array
    for (int i = 0; i < n; i++) {
        cin >> input[i]; //taking in input
    }
    ll prefix = 0;
    ll ans = 0;
    map<ll, int> sums;
    sums[0] = 1; //I guess this sets the beginning
    for (int y : input) {
        prefix += y; //Increment prefix by the value in the array up to this point
        ans += sums[prefix - x]; //Add the value at [prefix - x] in the map to our answer.
        sums[prefix]++; //Increment the value in the map at the prefix value
    }
    cout << ans << endl; //Output answer
    /* 3 lines are the focus of this analysis.
    YOOOOOO, I understand this now. So each time you pass a prefix sum, you add it to the map with a value of 1.
    If you add anything to answer later (when the default value of the map is supposed to be 0), that means that
    your current prefix sum minus the target is equal to the prefix sum you found earlier, and that the subarray
    in between sums to the target. prefixCur - target = prefixPrev, --> target = prefixCur - prefixPrev
    Very nice solution, and it's all in linear time too.
    */
}