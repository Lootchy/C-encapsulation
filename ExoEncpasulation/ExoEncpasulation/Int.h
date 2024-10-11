#pragma once
#include <iostream>
#include <cmath>

class Int {
private:
    int Integer;

public:
    // Constructeurs
    Int() : Integer(0) {}
    Int(int _int) : Integer(_int) {}

    // Surcharge des opérateurs arithmétiques
    Int operator+(const Int& rv) const {
        std::cout << "operator+" << std::endl;
        return Int(Integer + rv.Integer);
    }

    Int operator+=(const Int& rv) {
        std::cout << "operator+=" << std::endl;
        Integer += rv.Integer;
        return *this;
    }

    Int operator-(const Int& rv) const {
        std::cout << "operator-" << std::endl;
        return Int(Integer - rv.Integer);
    }

    Int operator-=(const Int& rv) {
        std::cout << "operator-=" << std::endl;
        Integer -= rv.Integer;
        return *this;
    }

    Int operator*(const Int& rv) const {
        std::cout << "operator*" << std::endl;
        return Int(Integer * rv.Integer);
    }

    Int operator*=(const Int& rv) {
        std::cout << "operator*=" << std::endl;
        Integer *= rv.Integer;
        return *this;
    }

    Int operator/(const Int& rv) const {
        std::cout << "operator/" << std::endl;
        return Int(Integer / rv.Integer);
    }

    Int operator/=(const Int& rv) {
        std::cout << "operator/=" << std::endl;
        Integer /= rv.Integer;
        return *this;
    }

    Int operator%(const Int& rv) const {
        std::cout << "operator%" << std::endl;
        return Int(Integer % rv.Integer);
    }

    Int operator%=(const Int& rv) {
        std::cout << "operator%=" << std::endl;
        Integer %= rv.Integer;
        return *this;
    }

    // Méthode pour calculer la puissance
    Int Puissance(int exposant) const {
        int resultat = std::pow(Integer, exposant);
        return Int(resultat);
    }

    // Getter pour accéder à l'attribut Integer
    int getValue() const {
        return Integer;
    }

    // Surcharge de l'opérateur <<
    friend std::ostream& operator<<(std::ostream& os, const Int& rv);
};

// Implémentation de la surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const Int& rv) {
    os << rv.Integer; // Affiche la valeur de l'entier
    return os;
}
