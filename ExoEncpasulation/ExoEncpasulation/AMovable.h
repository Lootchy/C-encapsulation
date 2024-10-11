#pragma once
#include <iostream>
#include <utility>

class AMovable {
private:
    float x;
    float y;
    float speed;


public:
    // Constructeur par défaut
    AMovable() : x(0.0f), y(0.0f), speed(0.0f) {}

    // Constructeur avec paramètres
    AMovable(float _xValue, float _yValue, float speedValue) : x(_xValue), y(_yValue), speed(speedValue) {}

    // Getter pour X et Y en même temps
    virtual std::pair<float, float> getPosition() const {
        return std::make_pair(x, y);
    }

    // Setter pour X et Y en même temps
    virtual void SetPosition(float _xValue, float _yValue) {
        x = _xValue;
        y = _yValue;
    }

    //Setter pour la speed
    virtual void SetSpeed(float speedValue) {
        speed = speedValue;
    }

    //Setter pour le mouvement
    virtual void SetMove(float _xValue, float _yValue, float addX, float addY) = 0 {
        x = _xValue + addX;
        y = _yValue + addY;
    }
};

