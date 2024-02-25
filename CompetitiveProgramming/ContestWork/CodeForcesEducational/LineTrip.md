So what we want to do is find the largest difference between gas stations, between the first gas station and 0, or the double of the difference between the last gas station and the target.
int cases, stations, end;
int volume = 0;
cin >> cases;
for (int i = 0; i < cases; i++) {
    cin >> stations >> end;
    vector<int> points(stations);
    for (int j = 0; j < n; j++) {
        cin >> points[j];
        if (j == 0) {
            volume = max(volume, points[j]);
        }
        if (j == n - 1) {
            volume = max(volume, end - points[j]);
        }
        else {
            volume = max(volume, points[j+1] - points[j]);
        }
    }
}
cout << volume;
//There might be other stuff I'm missing to make this function like using namespace std; but this is basically it