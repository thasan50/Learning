#include <iostream>
#include <cstdio>
using namespace std;

struct Rect {
    int x1, y1, x2, y2;
    int area () {
        return (y2 - y1) * (x2 - x1);
    }
};
int intersect(Rect board, Rect truck) {
    int xintersect = max(0, min(board.x2, truck.x2) - max(board.x1, truck.x1));
    int yintersect = max(0, min(board.y2, truck.y2) - max(board.y1, truck.y1));
    return xintersect * yintersect;
}
int main () {
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);
    Rect board1, board2, truck;
    cin >> board1.x1 >> board1.y1 >> board1.x2 >> board1.y2;
    cin >> board2.x1 >> board2.y1 >> board2.x2 >> board2.y2;
    cin >> truck.x1 >> truck.y1 >> truck.x2 >> truck.y2;
    int total_area = board1.area() + board2.area() - intersect(board1, truck) - intersect(board2, truck);
    cout << total_area;
}