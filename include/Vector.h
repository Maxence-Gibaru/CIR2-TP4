#ifndef CIR2_TP4_VECTOR_H
#define CIR2_TP4_VECTOR_H
#include "Point2D.h"

class Vector {
private:
    Point2D start;
    Point2D end;

public:
    // Constructeur
    Vector(const Point2D& startPoint, const Point2D& endPoint);

    // Méthode pour construire un vecteur à partir de deux points
    static Vector fromPoints(const Point2D& startPoint, const Point2D& endPoint);

    // Méthode pour calculer la somme de deux vecteurs
    Vector add(const Vector& other) const;

    // Méthode pour calculer le produit par un réel
    Vector multiply(float scalar);

    // Méthode pour vérifier l'égalité entre deux vecteurs
    bool isEqual(const Vector& other) const;

};

#endif //CIR2_TP4_VECTOR_H
