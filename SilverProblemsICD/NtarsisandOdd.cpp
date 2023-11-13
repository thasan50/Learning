#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool check = false;
    int index = -1;

    vector<int> v(n);
    vector<int> pre(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (i == 0) {
            pre[i] = v[i];
        }
        else {
            pre[i] = v[i] + pre[i - 1];
            if (pre[i] % 2 == 1) {
                index = i;
            }
        }
        
    }
    cout << index;
}

/* Okay, so let's see. You're given an array, look for the first occurence of an odd number and use that to determine the largest subarrays 
on its left side and right side. Take the max of left and right side and that's your answer. How does this overlap with checking for the 
last occurence of an odd number, is it possible for that to lead to a different max length subarray or...? Hold on, we can reason this out
at home when my brain works again. Learned a lot about number theory and prefix sums today. 
*/