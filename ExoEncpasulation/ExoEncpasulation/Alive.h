#pragma once

class Alive {
private:
    float MaxHealth;
    float CurrentHealth;

public:
    // Constructeurs
    Alive();
    Alive(float MaxHealthValue, float CurrentHealthValue);

    // Getters
    float GetMaxHealth() const;
    float GetCurrentHealth() const;

    // Méthode pour recevoir des dégâts
    virtual void GetDamage(float damage);
};
