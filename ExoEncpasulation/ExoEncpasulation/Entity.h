#pragma once
#include <iostream>

class Entity {
protected:
    float x;
    float y;

public:
    // Constructeur par d�faut
    Entity() : x(0.0f), y(0.0f) {}

    // Constructeur avec param�tres
    Entity(float xValue, float yValue) : x(xValue), y(yValue) {}

    // Getter pour X et Y en m�me temps
    virtual std::pair<float, float> getPosition() const {
        return std::make_pair(x, y);
    }

    // Setter pour X et Y en m�me temps
    virtual void setPosition(float xValue, float yValue) {
        x = xValue;
        y = yValue;
    }

    /*virtual void setPosition(float xValue, float yValue) {
        x = xValue;
        y = yValue;
    }*/

    // Destructeur virtuel pour permettre un bon nettoyage
    virtual ~Entity() = default;
};
