#ifndef CIR2_TP4_SHAPE_H
#define CIR2_TP4_SHAPE_H

class Shape {
private:
    const int id;
protected:
    int color;
    int getId() const;
public:
    // constructor
    Shape(int id, int color);
    int get_color() const;
    void set_color(int newColor);
};


#endif //CIR2_TP4_SHAPE_H
