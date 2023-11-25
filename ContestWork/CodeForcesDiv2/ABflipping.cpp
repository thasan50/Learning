#include <iostream>
#include <cstring>
using namespace std;

int main () {
    int cases; cin >> cases;
    int length;
    int counter = 0;
    bool behind = false;
    for (int i = 0; i < cases; i++) {
        cin >> length;
        char set[length];
        cin >> set[0];
        for (int j = 1; j < length; j++) {
            cin >> set[j];
            if (set[j-1] == 'B' && set[j] == 'A') {
                behind = true;
            }
            if (behind == true && set[j] == 'B') {
                counter--;
                behind = false;
            }
            else if (behind == true) {
                counter++;
            }
        }
        int max = length  - 1 - counter;
        cout << max << endl;;
        counter = 0;
        behind = false;
        //How many times can you make BA? B can be placed in n - 1 positions.
        //How many of those times can't be done? When A is placed at the end.
        /* Let's say BAABBAAAA. This is 3 times. 
        n - 1 is 8 positions. Now subtract ones where A is placed at the end. 4 are subtracted from the A's
        at the end, and 1 is subtracted from the A at the beginning.  
        */
       //Well this did not work out.
    }
}