#include <iostream>
#include "AMovable.h"
#include <vector>
#include "Alive.h"
#include "IAttack.h"
#include "StaticObject.h"
#include "BreakableObject.h"
#include "vector2.h"
#include "Int.h"
#include "mob.h"


int main() {
   
    /*float x = 0.0f;
    float y = 0.0f;
    Vector2 position(10.5f, 20.3f, 1.0f);


    std::pair<float, float> pos = position.getPosition();
    std::cout << "Position X: " << pos.first << ", Position Y: " << pos.second << std::endl;


    position.setPosition(15.2f, 25.8f);

    pos = position.getPosition();
    std::cout << "Nouvelle position X: " << pos.first << ", Nouvelle position Y: " << pos.second << std::endl;

    position.SetMove(pos.first, pos.second, 1.0f, 1.0f);
    pos = position.getPosition();
    std::cout << "Nouvelle position X: " << pos.first << ", Nouvelle position Y: " << pos.second << std::endl;
    */

    /*Alive alive;
    float damage = 10;
    float MaxHealth = 100.0f;
    float CurrentHealth = 100.0f;


    MaxHealth = alive.GetMaxHealth(MaxHealth);
    cout << MaxHealth << std::endl;
    CurrentHealth = alive.GetCurrentHealth(CurrentHealth);
    cout << CurrentHealth << std::endl;
    alive.GetDamage(CurrentHealth, damage);
    CurrentHealth = alive.GetCurrentHealth(CurrentHealth);
    alive.GetCurrentHealth(CurrentHealth);
    cout << CurrentHealth << std::endl;
    */

    /*float hp = 100.0f;
    StaticObject obj(0.0f, 1.0f);
    BreakableObject breakable(10.0f, 20.0f, hp, hp);
 

    // Affiche la santé actuelle
    std::cout << "Current Health: " << breakable.GetCurrentHealth(hp) << std::endl;

    // Inflige des dégâts à l'objet
    breakable.GetDamage(hp, 30.0f);
    std::cout << "Current Health after damage: " << breakable.GetCurrentHealth(0) << std::endl;

    // Inflige des dégâts supplémentaires pour provoquer la rupture
    breakable.GetDamage(hp, 100.0f);*/

    Mob mob(10.0f, 20.0f, 100.0f, 100.0f, 2.0f, 1.0f, 1.0f);
    mob.GetDamage(100.0f ,15.0f); // Mob reçoit 15 points de dégâts

    // Exemple de mouvement
    mob.SetMove(10.0f, 20.0f, 2.0f, -2.0f); // Déplace le mob


    
    return 0;
}

