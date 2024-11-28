#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

int main() {
    //rock only matters when barn, lake, and rock have same x or y coordinate
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    char arr[10][10];
    pair<int, int> barn;
    pair<int, int> lake;
    pair<int, int> rock;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 'B') {
                barn.first = i;
                barn.second = j;
            }
            else if (arr[i][j] == 'L') {
                lake.first = i;
                lake.second = j;
            }
            else if (arr[i][j] == 'R') {
                rock.first = i;
                rock.second = j;
            }
        }
    }
    int distance = 0;
    distance = abs(barn.first - lake.first) + abs(barn.second - lake.second) - 1;
    if (rock.first == barn.first && rock.first == lake.first) {
        if ((rock.second > barn.second && rock.second < lake.second) || (rock.second < barn.second && rock.second > lake.second)) {
            distance += 2;
        }
    }
    else if (rock.second == barn.second && rock.second == lake.second) {
        if ((rock.first > barn.first && rock.first < lake.first) || (rock.first < barn.first && rock.first > lake.first)) {
            distance += 2;
        }
    }
    cout << distance;
}