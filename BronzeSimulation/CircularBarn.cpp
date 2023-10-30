#include <iostream>
<<<<<<< HEAD
#include <vector>
#include <cstdio>
using namespace std;

int main () {
    freopen("cbarn.in", "r", stdin);
    freopen("cbarn.out", "w", stdout);
    int N; cin >> N;
    int min = N*N*100; int counter = 0;
    vector<int> v(2*N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
        v[i+N] = v[i]; 
    }
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N+i; j++) {
            counter += v[j] * (i +1);
        }
        if (counter < min) {
            min = counter;
        }
        counter = 0;
    }
    cout << min;
=======
#include <cstdio>
#include <vector>
using namespace std;

int main () {
    //freopen("cbarn.in", "r", stdin);
    //freopen("cbarn.out", "w", stdout);
    int rooms;
    cin >> rooms;
    int total = 0; int temp = 0;
    vector<int> v(2*rooms);
    for (int i = 0; i < rooms; i++) {
        cin >> v[i];
    }
    v[rooms, 2*rooms - 1] = v[0, rooms];
    for (int j = 0; j < rooms; j++) {
        for (int k = j; k < j + rooms; k++) {
            
        }
    }

    //Check which leads to the smallest total, multiply each index of v by an increasing number and add them all up,
    //compare sums for the smallest. 
>>>>>>> bc544f8ba3d92d7f59c7337d4a09e9b689151567
}