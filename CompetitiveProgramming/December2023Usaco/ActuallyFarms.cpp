#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    int N = 0;
    vector<vector<int>> height(t);
    vector<vector<int>> growth(t);
    vector<vector<int>> final(t);
    for (int i = 0; i < t; i++) {
        cin >> N;
        height.push_back(vector<int>(N));
        growth.push_back(vector<int>(N));
        final.push_back(vector<int>(N));
        for (int j = 0; j < N; j++) {
            cin >> height[i][j];
        }
        for (int j = 0; j < N; j++) {
            cin >> growth[i][j];
        }
        for (int j = 0; j < N; j++) {
            cin >> final[i][j];
        }
        int days = -1;
        for (int y = 0; y < N; y++) {
            //Code here, I need to find a way to translate graphs into c++ code. Like with height+growth*x, and
            //placed in accordance with their positions in final. Some kind of inequality thing?
        }

        cout << days << endl;
    }
}