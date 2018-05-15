#ifndef HEADER_H
#define HEADER_H

class Point {

private:
    double X, Y;

public:
    Point()
    Point(double, double);
    double get_X() const;
    double get_Y() const;
    void setXtoY();
    void setYtoX();
    void shift(double, double);
    void reset(double, double);

};

#endif        // HEADER_H
