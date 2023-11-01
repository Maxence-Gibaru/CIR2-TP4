#ifndef CIR2_TP4_CIRCLE_H
#define CIR2_TP4_CIRCLE_H

#include <iostream>
#include <cstdlib>  // Pour rand()
#include <ctime>    // Pour time()
#include "Shape.h"

class Circle : public Shape {
private:
    float radius;
public:
    Circle(int id, int color, float radius);
    float get_radius() const;
    void set_radius(const float&);
    float get_area() const;
    float get_perimeter() const;
    void print();

};

class CircleEstimation {
public:
    static double estimateCircleArea(int numPoints) {
        int insideCircle = 0;

        // Seed the random number generator with the current time
        srand((time(nullptr)));

        for (int i = 0; i < numPoints; i++) {
            double x = (rand() % 20000 - 10000) / 10000.0; // Valeurs aléatoires entre -1 et 1
            double y = (rand() % 20000 - 10000) / 10000.0; // Valeurs aléatoires entre -1 et 1

            if (x * x + y * y <= 1.0) { // Vérifie si le point est à l'intérieur du cercle (rayon = 1)
                insideCircle++;
            }
        }

        double estimatedArea = static_cast<double>(insideCircle) / static_cast<double>(numPoints) * 4.0; // Multiplié par 4 car le carré a une superficie de 4 unités
        return estimatedArea;
    }

    static double estimatePi(int numPoints) {
        double estimatedArea = estimateCircleArea(numPoints);
        return estimatedArea;
    }
};


#endif //CIR2_TP4_CIRCLE_H
