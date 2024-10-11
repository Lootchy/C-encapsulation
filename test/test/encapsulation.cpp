#include <iostream>
#include "test.h"

using namespace std;

test::test() : mx(x), my(y), mz(z) {

}

string test::ToString() {
    return "Point: x : " + to_string(mx) + " ,y : " + to_string(my) + ", z : " + to_string(mz);
}

void test::SetCoordinates() {
    cout << "Valeur pour x: ";
    cin >> mx;
    cout << "Valeur pour y: ";
    cin >> my;
    cout << "Valeur pour z: ";
    cin >> mz;
}