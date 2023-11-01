#include "Shape.h"

// Définition du constructeur
Shape::Shape(int id, int color) : id(id), color(color) {
}

// Implémentation de la méthode getId
int Shape::getId() const {
    return id;
}

// Implémentation de la méthode get_color
int Shape::get_color() const {
    return color;
}

// Implémentation de la méthode set_color
void Shape::set_color(int newColor) {
    color = newColor;
}


