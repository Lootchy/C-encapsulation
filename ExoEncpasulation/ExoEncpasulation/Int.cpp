#include "Int.h"
#include <cmath>

// Constructeurs
Int::Int() : Integer(0) {}
Int::Int(int _int) : Integer(_int) {}

// Surcharge de l'opérateur +
Int Int::operator+(const Int& rv) const {
    std::cout << "operator+" << std::endl;
    return Int(Integer + rv.Integer);
}

// Surcharge de l'opérateur +=
Int Int::operator+=(const Int& rv) {
    std::cout << "operator+=" << std::endl;
    Integer += rv.Integer;
    return *this;
}

// Surcharge de l'opérateur -
Int Int::operator-(const Int& rv) const {
    std::cout << "operator-" << std::endl;
    return Int(Integer - rv.Integer);
}

// Surcharge de l'opérateur -=
Int Int::operator-=(const Int& rv) {
    std::cout << "operator-=" << std::endl;
    Integer -= rv.Integer;
    return *this;
}

// Surcharge de l'opérateur *
Int Int::operator*(const Int& rv) const {
    std::cout << "operator*" << std::endl;
    return Int(Integer * rv.Integer);
}

// Surcharge de l'opérateur *=
Int Int::operator*=(const Int& rv) {
    std::cout << "operator*=" << std::endl;
    Integer *= rv.Integer;
    return *this;
}

// Surcharge de l'opérateur /
Int Int::operator/(const Int& rv) const {
    std::cout << "operator/" << std::endl;
    return Int(Integer / rv.Integer);
}

// Surcharge de l'opérateur /=
Int Int::operator/=(const Int& rv) {
    std::cout << "operator/=" << std::endl;
    Integer /= rv.Integer;
    return *this;
}

// Surcharge de l'opérateur %
Int Int::operator%(const Int& rv) const {
    std::cout << "operator%" << std::endl;
    return Int(Integer % rv.Integer);
}

// Surcharge de l'opérateur %=
Int Int::operator%=(const Int& rv) {
    std::cout << "operator%=" << std::endl;
    Integer %= rv.Integer;
    return *this;
}

// Méthode pour calculer la puissance
Int Int::Puissance(int exposant) const {
    int resultat = std::pow(Integer, exposant);
    return Int(resultat);
}

// Getter pour accéder à la valeur d'Integer
int Int::getValue() const {
    return Integer;
}

// Surcharge de l'opérateur <<
std::ostream& operator<<(std::ostream& os, const Int& rv) {
    os << rv.Integer;
    return os;
}
