#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
typedef long long ll;

int main () {
    ll n, sum;
    cin >> n;
    sum = n*(n+1)/2;
    if (sum % 2 == 1) {
        cout << "NO";
    }
    else {
        cout << "YES" << endl;
        vector<int> first, second, third;
        ll target = sum /2;
        for (int i = n; i >= 1; i--) {
            first.push_back(i);
        }

        for (int b = 0; b < n; b++) {
            if (target > 0 and target - first[b] >= 0) {
                target = target - first[b];
                second.push_back(first[b]);
            }
            else {
                third.push_back(first[b]);
            }
        }
        /*I think this is O(n*m), maybe? n and second.size() are definitely not the same length, but if
        second.size() is guaranteed to be smaller, wouldn't it just be subsumed into n?
        Regardless, it doesn't work. I need a faster solution.*/
        cout << third.size() << endl;
        for (int one:third) {
            cout << one << " ";
        }
        cout << "\n" << second.size() << endl;
        for (int two:second) {
            cout << two << " ";
        }
        }
        return 0;
    }

  
/*First off, check if the sum of numbers from 1,2...n is an even number. If true, then output YES for divisible.
Now we need to find some combination of numbers that equals to half the sum of numbers 1 to n. You could try
Subtracting the largest number in the list, then the next largest number, until you reach a value of 0. If the 
next largest number would go beyond 0 - meaning the result is negative, then that number would be skipped. So for
n=7, you could subtract 7 from 14 to get 7, then subtract 6 to get 1, then skip 5, 4, 3, 2, until you can now subtract
1 to get 0. The numbers subtracted are added to a list at the same time. The len of the list is outputed, then the 
values in that list individually. Then subtract the len of that list from len of the numbers 1...n and output that.
Then, if a value in the original list is not in our newly created list, we output those numbers. Cool?*/