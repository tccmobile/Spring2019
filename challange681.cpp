//
// Created by T10115885 on 2/26/2019.
//

#include <iostream>
using namespace std;

/* Your solution goes here  */

void CoordTransform(int oldx, int oldy, int& newx, int& newy){

    newx = (oldx + 1) * 2;
    newy = (oldy + 1) * 2;

    return;

}

int main() {
    int xValNew;
    int yValNew;

    CoordTransform(3, 4, xValNew, yValNew);
    cout << "(3, 4) becomes " << "(" << xValNew << ", " << yValNew << ")" << endl;

    return 0;
}