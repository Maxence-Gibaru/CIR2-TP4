#include "../include/Vector.h"

// Constructeur
Vector::Vector(const Point2D& startPoint, const Point2D& endPoint) : start(startPoint), end(endPoint) {
}

// Méthode pour construire un vecteur à partir de deux points
Vector Vector::fromPoints(const Point2D& startPoint, const Point2D& endPoint) {
    return Vector(startPoint, endPoint);
}

// Méthode pour calculer la somme de deux vecteurs
Vector Vector::add(const Vector& other) const {
    Point2D newStart = start.add(other.start);
    Point2D newEnd = end.add(other.end);
    return Vector(newStart, newEnd);
}

// Méthode pour calculer le produit par un réel
Vector Vector::multiply(float scalar) {
    Point2D newStart = start.multiply(scalar);
    Point2D newEnd = end.multiply(scalar);
    return Vector(newStart, newEnd);
}

// Méthode pour vérifier l'égalité entre deux vecteurs
bool Vector::isEqual(const Vector& other) const {
    return start.isEqual(other.start) && end.isEqual(other.end);
}
