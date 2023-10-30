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
}