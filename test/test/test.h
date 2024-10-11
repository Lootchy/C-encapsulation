#pragma once
#include <string>
using namespace std;

class test {
public:
    float mx, my, mz;
    test(float x, float y, float z);
   
    void SetCoordinates();


    string ToString();
};