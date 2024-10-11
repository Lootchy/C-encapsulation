#pragma once
#include <iostream>

class Int {
private:
    int Integer;

public:
    // Constructeurs
    Int();
    Int(int _int);

    // Surcharge des opérateurs arithmétiques
    Int operator+(const Int& rv) const;
    Int operator+=(const Int& rv);
    Int operator-(const Int& rv) const;
    Int operator-=(const Int& rv);
    Int operator*(const Int& rv) const;
    Int operator*=(const Int& rv);
    Int operator/(const Int& rv) const;
    Int operator/=(const Int& rv);
    Int operator%(const Int& rv) const;
    Int operator%=(const Int& rv);

    // Méthode pour calculer la puissance
    Int Puissance(int exposant) const;

    // Getter pour accéder à l'attribut Integer
    int getValue() const;

    // Surcharge de l'opérateur <<
    friend std::ostream& operator<<(std::ostream& os, const Int& rv);
};
