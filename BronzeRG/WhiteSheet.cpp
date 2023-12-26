#include <iostream>
using namespace std;

typedef long long ll;

struct Rect {
    int x1, y1, x2, y2;
    ll area () {
        return (x2-x1)*(y2-y1);
    }
};

ll intersect(Rect white, Rect black) {
    int xintersect = max(0, min(white.x2, black.x2) - max(white.x1, black.x1));
    int yintersect = max(0, min(white.y2, black.y2) - max(white.y1, black.y1));
    return xintersect * yintersect;
}

Rect final(Rect black1, Rect black2) {
    Rect i; 
    int xintersect = max(0, min(black1.x2, black2.x2) - max(black1.x1, black2.x1));
    int yintersect = max(0, min(black1.y2, black2.y2) - max(black1.y1, black2.y1));
    if (xintersect != 0 && yintersect != 0) {
        i.x1 = max(black1.x1, black2.x1);
        i.y1 = max(black1.y1, black2.y1);
        i.x2 = min(black1.x2, black2.x2);
        i.y2 = min(black1.y2, black2.y2);
    }
    return i;    
}

int main () {
    Rect white, black1, black2;
    cin >> white.x1 >> white.y1 >> white.x2 >> white.y2;
    cin >> black1.x1 >> black1.y1 >> black1.x2 >> black1.y2;
    cin >> black2.x1 >> black2.y1 >> black2.x2 >> black2.y2;
    ll total_area = white.area() - intersect(white, black1) - intersect(white, black2) + intersect(white, final(black1, black2));
    if (total_area > 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}