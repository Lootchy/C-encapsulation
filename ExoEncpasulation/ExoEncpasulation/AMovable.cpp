#include "AMovable.h"

// Constructeur par défaut
AMovable::AMovable() : x(0.0f), y(0.0f), speed(0.0f) {}

// Constructeur avec paramètres
AMovable::AMovable(float _xValue, float _yValue, float speedValue) 
    : x(_xValue), y(_yValue), speed(speedValue) {}

// Retourne la position sous forme de pair (x, y)
std::pair<float, float> AMovable::getPosition() const {
    return std::make_pair(x, y);
}

// Définit la position (x, y)
void AMovable::SetPosition(float _xValue, float _yValue) {
    x = _xValue;
    y = _yValue;
}

// Définit la vitesse
void AMovable::SetSpeed(float speedValue) {
    speed = speedValue;
}
