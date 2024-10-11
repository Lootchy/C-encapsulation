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

    // Surcharge des op�rateurs arithm�tiques
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

    // M�thode pour calculer la puissance
    Int Puissance(int exposant) const {
        int resultat = std::pow(Integer, exposant);
        return Int(resultat);
    }

    // Getter pour acc�der � l'attribut Integer
    int getValue() const {
        return Integer;
    }

    // Surcharge de l'op�rateur <<
    friend std::ostream& operator<<(std::ostream& os, const Int& rv);
};

// Impl�mentation de la surcharge de l'op�rateur <<
std::ostream& operator<<(std::ostream& os, const Int& rv) {
    os << rv.Integer; // Affiche la valeur de l'entier
    return os;
}
