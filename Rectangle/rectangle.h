#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

class Rectangle : public Shape {

private:
  float length;
  float width;
}

public:
  Rectangle();
  Rectangle(double, double);
  void set_width(dpuble w);
  void set_length(double l);
  double get_width();
  double get_length();
  double area();

};

#endif    // RECTANGLE_H
