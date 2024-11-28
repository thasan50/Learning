#include <iostream>
using namespace std;

int main () {
    int a1 = 5;
    int a2 = 4;
    int temp = 0;
    for (int i = 2; i < 4; i++) {
        temp = a1;
        a1 = a1+3*a2;
        a2 = temp;
    }
    cout << a1 << endl;
}