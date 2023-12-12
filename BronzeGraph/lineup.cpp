#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    //freopen("lineup.in", "r", stdin);
    //freopen("lineup.out", "w", stdout);
    int N; cin >> N;
    vector<string> vect(N);
    for (int i = 0; i < N; i++) {
        getline(cin, vect[i]);
        cin.ignore(1, '\n');
        cout << vect[i] << endl;
    }
    vector<string> names{"Bessie", "Buttercup", "Belinda", "Beatrice", "Bella", "Blue", "Betsy","Sue"};
    /*
    Dissection of the solution:
    First things first: Notice the "Code Snippet with Cow Names"? That's where they put the names of
    all the cows (it turns out that there were only 8 and they were named on the website), and then sorted
    them alphabetically. This way, they don't have to worry about doing that later. Pretty cool, and they
    use this later with the map. So the thing they do with the map is make the names of the cows from before
    into the "keys" of the map, and the value corresponds to the index numbers. It's kind of like the reverse
    of an array. cow_inds, is that very map. This will come into play later.

    The way they took in the input was remarkably similar to Aidan's method of 
    taking in the first and last strings in variable form and disregarding everything in between as 
    trash. They actually called the variable for the middle stuff trash as well, which is hilarious.

    For each line of input, they attach the first cow's name to the second cow's name in the neighbors 
    array of arrays(array^2) and vice versa. The thing with the neighbor array^2 is that each "row" in the 
    array corresponds to a single cow. The cow itself, who is in front of it, and who is behind it. Using
    the map, we're able to convert the cow's name into its index. After that, attaching the first cow to
    the second cow and vice versa in the neighbors array^2 is possible.

    Okay, now we have a vector for order and a vector to see whether a value was added or not. We have a few
    if conditionals to see what is going on. If nothing has been added to the final order vector  
    */

}