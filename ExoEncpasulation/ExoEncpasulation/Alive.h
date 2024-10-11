#pragma once
#include <iostream>

class Alive {
private :
	float MaxHealth;
	float CurrentHealth;

public :
	Alive() : MaxHealth(100.0f), CurrentHealth(MaxHealth){}
	Alive(float MaxHealthValue, float CurrentHealthValue) : MaxHealth(MaxHealthValue), CurrentHealth(MaxHealth) {}

	float GetMaxHealth(float MaxHealthValue) {
		return MaxHealth;
	}

	float GetCurrentHealth(float CurrentHealthValue) {
		return CurrentHealth;
	}

	virtual void GetDamage(float CurrentHealthValue, float damage) = 0 {
		CurrentHealth = CurrentHealthValue - damage;
	}

};