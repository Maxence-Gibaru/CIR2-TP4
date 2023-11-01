#include <iostream>
#include <cstdio>
#include "Circle.h"
#include "Point2D.h"
#include "Shape.h"
#include "Vector.h"
#include "src/test.cpp"

using namespace std;

void test_classes() {

    cout << "--A--\n";
    A a0; // default constructor, x = 0, print 1
    cout << endl;
    A a1(3); // constructor with parameter, x = 3, print 2
    cout << endl;
    A a2(a1); // constructor of copy, x = 3, print 3
    cout << endl;
    A a3 = a2; // same as above, x = 3, print 3
    cout << endl;
    a3 = a1; // idk
    cout << endl;
    cout << "--B--\n";

    /* Second B constructor, call default A constructor,
     * a = a0,
     * y = 3,
     * print 1 then print 5
     */
    B b0(a0, 3);
    cout << endl;

    /* First B constructor, call A copy constructor,
     * print 3 then print 4
     * */
    B b1(a1);
    cout << endl;


    B b2;
    cout << endl;


    cout << "--C--\n";

    C c0;
    cout << endl;
    C c1(a1);
    cout << endl;
    C c2(b2);
    cout << endl;
}

void exercise2() {
    int numPoints = 1000000;

    double estimatedArea = CircleEstimation::estimateCircleArea(numPoints);
    std::cout << "Estimation de la surface du cercle : " << estimatedArea << std::endl;

    double estimatedPi = CircleEstimation::estimatePi(numPoints);
    std::cout << "Estimation de Pi : " << estimatedPi << std::endl;
}

void exercise3() {

    // Créez deux points 2D
    Point2D point1(1.0, 2.0);
    Point2D point2(3.0, 4.0);

    // Créez deux vecteurs à partir de ces points
    Vector vector1(point1, point2);
    Vector vector2 = Vector::fromPoints(Point2D(0.0, 0.0), Point2D(2.0, 3.0));

    // Calculez la somme de deux vecteurs
    Vector sum = vector1.add(vector2);

    // Calculez le produit d'un vecteur par un réel
    Vector scaled = vector1.multiply(2.0);

    // Vérifiez l'égalité entre deux vecteurs
    bool isEqual = vector1.isEqual(vector2);

    cout << "Vector 1: (" << vector1.getStart().getX() << ", " << vector1.getStart().getY() << ") to (" << vector1.getEnd().getX() << ", " << vector1.getEnd().getY() << ")" << endl;
    cout << "Vector 2: (" << vector2.getStart().getX() << ", " << vector2.getStart().getY() << ") to (" << vector2.getEnd().getX() << ", " << vector2.getEnd().getY() << ")" << endl;

    cout << "Sum of vectors: (" << sum.getStart().getX() << ", " << sum.getStart().getY() << ") to (" << sum.getEnd().getX() << ", " << sum.getEnd().getY() << ")" << endl;
    cout << "Scaled vector1: (" << scaled.getStart().getX() << ", " << scaled.getStart().getY() << ") to (" << scaled.getEnd().getX() << ", " << scaled.getEnd().getY() << ")" << endl;

    if (isEqual) {
        std::cout << "Vector 1 and Vector 2 are equal." << std::endl;
    } else {
        std::cout << "Vector 1 and Vector 2 are not equal." << std::endl;
    }
}

int main() {
    //test_classes();
    exercise3();
}