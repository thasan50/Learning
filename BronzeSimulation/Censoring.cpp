#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string text, toRemove;
    cin >> text >> toRemove;
    string output = "";
    for (int i = 0; i < text.length(); i++) {
        output += text[i];
        if (output.length() >= toRemove.length() && output.substr(output.length() - toRemove.length()) == toRemove) {
            output.resize(output.length() - toRemove.length());
        }
    }
    cout << output;
}
/* My attempt
string filter (string original, string toRemove) {
    for (int i = 0; i < original.length() - toRemove.length(); i++) {
        if (original.substr(i, toRemove.length()) == toRemove) {
            return original.substr(0, i) + original.substr(i + toRemove.length());
        }
    }
    return original;
}
int main () {
    freopen("censor.in", "r", stdin);
    freopen("censor.out", "w", stdout);
    string text; cin >> text;
    string profane; cin >> profane;
    int counter = 0;
    while (filter(text, profane) != text) {
        text = filter(text, profane);
        counter++;
        if (counter > 100) {
            break;
        }
    }
    cout << text;
    if (counter > 100) {
        cout << "This was a failure";
    }
}*/
