#include "Alive.h"

// Constructeur par défaut
Alive::Alive() : MaxHealth(100.0f), CurrentHealth(MaxHealth) {}

// Constructeur avec des valeurs initiales
Alive::Alive(float MaxHealthValue, float CurrentHealthValue) 
    : MaxHealth(MaxHealthValue), CurrentHealth(CurrentHealthValue) {}

// Retourne la valeur maximale de la santé
float Alive::GetMaxHealth() const {
    return MaxHealth;
}

// Retourne la santé actuelle
float Alive::GetCurrentHealth() const {
    return CurrentHealth;
}

// Réduit la santé actuelle en fonction des dégâts reçus
void Alive::GetDamage(float damage) {
    CurrentHealth -= damage;
    if (CurrentHealth < 0) {
        CurrentHealth = 0; // S'assurer que la santé ne descend pas en dessous de 0
    }
}
