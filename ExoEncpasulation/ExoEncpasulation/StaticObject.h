#pragma once
#include "Entity.h"
#include <iostream>

class StaticObject : public Entity {
public :
    StaticObject(float xValue, float yValue) : Entity(xValue, yValue) {
        setPosition(xValue, yValue); // D�finit les valeurs de x et y
        std::cout << "Static Object just created at x = " << x << " and y = " << y << std::endl;
    }
};