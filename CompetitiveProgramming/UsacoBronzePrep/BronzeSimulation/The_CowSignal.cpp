#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main () {
    freopen("cowsignal.in", "r", stdin);
    freopen("cowsignal.out", "w", stdout);
    int M, N, K;
    cin >> M >> N >> K;
    vector<vector<char>> v(M, vector<char>(N));
	for(int i = 0; i < M; i++){
		for(int j = 0; j < N; j++){
			cin >> v[i][j];
		}
	}
	for (int i = 0; i < M; i++) {
        for (int h = 0; h < K; h++) {
            for (int j = 0; j < N; j++) {
                cout << string(K, v[i][j]);
            }
            cout << "\n";
        }
    }
    return 0;
}