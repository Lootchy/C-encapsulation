#include <iostream>
#include "test.h"

using namespace std;


int main() {
    test point;

    point.SetCoordinates();
    cout << point.ToString();

    return 0;
}



