#ifndef CIR2_TP4_POINT2D_H
#define CIR2_TP4_POINT2D_H

class Point2D {
private:
    float x, y;
public:
// constructors
    Point2D();
    Point2D(const float &newx, const float &newy);

    // Setters and getters
    void setXY(const float &newx, const float &newy);
    void setX(const float &newx);
    void setY(const float &newy);

    [[nodiscard]] float getX() const;
    [[nodiscard]] float getY() const;


    // other methods
    void print() const;
    float distanceTo(const Point2D &otherPoint2D) const;
    Point2D add(const Point2D &otherPoint2D) const;
    Point2D multiply(const float);
    bool isEqual(const Point2D &otherPoint2D) const;
};

#endif //CIR2_TP4_POINT2D_H
