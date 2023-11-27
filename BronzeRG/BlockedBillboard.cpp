#include <iostream>
using namespace std;

int main () {
    int coordinates[12];
    for (int i = 0; i < 12; i++) {
        cin >> coordinates[i];
    }
    int length1 = coordinates[2] - coordinates[0]; //Board1, startx and endx
    int width1 = coordinates[3] - coordinates[1]; //Board1, starty and endy
    int length2 = coordinates[6] - coordinates[4]; //Board2, startx and endx
    int width2 = coordinates[7] - coordinates[5]; //Board2, starty and endy
    int length3 = coordinates[10] - coordinates[8]; //Truck, startx and endx
    int width3 = coordinates[11] - coordinates[9]; //Truck, starty and endy
    
    //Intersecting area fart needed

    int total_area = length1*width1 - length2*width2;
}