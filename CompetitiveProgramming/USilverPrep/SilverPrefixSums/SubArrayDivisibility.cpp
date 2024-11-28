#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef long long ll;

int main() {
    int n; cin >> n;
    vector<ll> prefix(n);
    ll sums = 0;
    prefix[0] = 1;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        sums += a;
        prefix[((sums%n)+n)%n]++; //Apparently this accounts for negative sums, note for later
    }//This is doing a pretty similar thing to how it went in Div7, prefix vector of remainders
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (prefix[i]*(prefix[i]-1))/2; //I saw this pattern, but I didn't remember the formula. Damn
    }
    cout << ans << endl;
/*
Initially I was thinking of doing something like div7, but that doesn't actually work here because
we aren't searching for the maximum length subarray divisible by n, we're searching for the total
number of subarrays divisible by n. The thing from subarraysums2 doesn't exactly work here b/c
we're dividing and stuff. Maybe we could use that as a foundation and then modify it, but div7
definitely shouldn't work here. The thing I just thought of with n choose k or something and the 
remainder array also wouldn't work, too many operations to be done.
Let's go back to the basics. A prefix at one point minus a prefix at an earlier point gets you 
a subarray sum. Modulo n == 0 means its divisible by n. But that takes too long for something like
this, at least in the way I'm thinking. 

The solution has two key points. Prefix vector that has all the moduloed sums, and adding to the 
answer based on n choose 2 formula. I sort of thought of the first one, but I didn't think it would
work. As for the second, I noticed the pattern but I didn't remember the formula used. Darn.
n choose 2 is used to find the total number of subarrays after determining that there are n different
points with the same remainder. So like, if there were 5 points in the vector where the remainder
after dividing by n was 5, then there would be (5)*(5-1)/2 = 10 possible subarrays you could make
from that. Missing something so obvious feels annoying man.
*/
}