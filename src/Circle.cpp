#include <iostream>
#include <cmath>
#include "../include/Circle.h"

using namespace std;

// Constructeur de Circle
Circle::Circle(int id, int color, float radius) : Shape(id, color), radius(radius) {
}

// Implémentation de la méthode get_radius
float Circle::get_radius() const {
    return radius;
}

// Implémentation de la méthode set_radius
void Circle::set_radius(const float& newRadius) {
    radius = newRadius;
}

// Implémentation de la méthode get_area
float Circle::get_area() const {
    return M_PI * radius * radius; // Utilisez la valeur de Pi appropriée
}

// Implémentation de la méthode get_perimeter
float Circle::get_perimeter() const {
    return 2 * M_PI * radius; // Utilisez la valeur de Pi appropriée
}

// Implémentation de la méthode print
void Circle::print() {
    cout << "Circle ID: " << getId() << ", Color: " << get_color() << ", Radius: " << radius << std::endl;
}

