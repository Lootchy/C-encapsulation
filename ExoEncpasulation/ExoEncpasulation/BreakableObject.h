#pragma once
#include <iostream>
#include "Entity.h"
#include "Alive.h"

class BreakableObject : public Alive, public Entity {
public:
    BreakableObject(float xValue, float yValue, float MaxHealthValue, float CurrentHealthValue)
        : Entity(xValue, yValue), Alive(MaxHealthValue, CurrentHealthValue) {
        setPosition(xValue, yValue);
        std::cout << "Breakable Object just created at x = " << xValue
            << " and y = " << yValue
            << " with " << MaxHealthValue << " life" << std::endl;
    }

    void GetDamage(float CurrentHealthValue, float damage) override {
        // Calcule la nouvelle santé
        float newHealth = GetCurrentHealth(0) - damage;
        Alive::GetDamage(CurrentHealthValue, damage);

        if (GetCurrentHealth(0) <= 0) { 
            std::cout << "Breakable Object just broke" << std::endl;
        }
    }
};
