#include "../include/Point2D.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

Point2D::Point2D() : x(rand() % 100), y(rand() % 100) {}

Point2D::Point2D(const float &newx, const float &newy):x(newx),y(newy) {}

void Point2D::setXY(const float &newx, const float &newy) {
    this->x = newx;
    this->y = newy;
}

void Point2D::setX(const float &newx) {
    this->x = newx;
}

void Point2D::setY(const float &newy) {
    this->y = newy;
}

float Point2D::getX() const {
    return this->x;
}

float Point2D::getY() const {
    return this->y;
}

void Point2D::print() const {
    cout << "Coord x : " << getX() << endl;
    cout << "Coord y : " << getY() << endl;
    cout << endl;
}

float Point2D::distanceTo(const Point2D &otherPoint2D) const {
    float newX = getX() - otherPoint2D.getX();
    float newY = getY() - otherPoint2D.getY();
    return sqrt(newX*newX + newY*newY);
}

Point2D Point2D::add(const Point2D &otherPoint2D) const {
    Point2D newPoint(getX() + otherPoint2D.getX(), getY() + otherPoint2D.getY());
    return newPoint;
}

Point2D Point2D::multiply(float scalar) {
    Point2D newPoint(getX() * scalar , getY() * scalar);
    return newPoint;
}

bool Point2D::isEqual(const Point2D &otherPoint2D) const {
    return (getX() == otherPoint2D.getX() && getY() == otherPoint2D.getY());
}



