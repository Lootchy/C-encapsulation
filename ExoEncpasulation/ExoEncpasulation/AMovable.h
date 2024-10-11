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
    AMovable();

    // Constructeur avec paramètres
    AMovable(float _xValue, float _yValue, float speedValue);

    // Getter pour X et Y en même temps
    virtual std::pair<float, float> getPosition() const;

    // Setter pour X et Y en même temps
    virtual void SetPosition(float _xValue, float _yValue);

    // Setter pour la vitesse
    virtual void SetSpeed(float speedValue);

    // Méthode virtuelle pure pour le mouvement
    virtual void SetMove(float _xValue, float _yValue, float addX, float addY) = 0;
};
