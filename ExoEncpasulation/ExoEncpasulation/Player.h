#pragma once
#include "Entity.h"
#include "Alive.h"
#include "AMovable.h"
#include "IAttack.h"


class Player : public Alive, public AMovable, public Entity, public IAttacker {
public:
    Player(float xValue, float yValue, float MaxHealthValue, float CurrentHealthValue, float _xValue, float _yValue, float speedValue)
        : Entity(xValue, yValue), Alive(MaxHealthValue, CurrentHealthValue), AMovable(xValue, yValue, speedValue) {
        setPosition(xValue, yValue);
        std::cout << "Mob just created at x = " << xValue
            << " and y = " << yValue
            << " with " << MaxHealthValue << " life"
            << " with direction x = " << _xValue
            << " and y = " << _yValue;
    }

    void GetDamage(float CurrentHealthValue, float damage) override {
        // Calcule la nouvelle santé
        float newHealth = GetCurrentHealth(0) - damage;
        Alive::GetDamage(CurrentHealthValue, damage);

        if (GetCurrentHealth(0) <= 0) {
            std::cout << "Mob just die" << std::endl;
        }
    }

    void SetMove(float xValue, float yValue, float _xValue, float _yValue) override {
        float newX = xValue + _xValue;
        float newY = yValue + _yValue;
        AMovable::SetMove(newX, newY, _xValue, _yValue);
        std::cout << "Mob moved to x = " << newX << " y = " << newY << std::endl;
    }
};