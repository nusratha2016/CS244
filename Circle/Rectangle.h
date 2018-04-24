class Circle {
private:
  double radius;

public:
  Circle(double radius =1, double x=0, double y=0):Shape(x,y) {this->radius=radius;}
  void set_radius(double) {this->radius=radius;}
  double get_radius()const {return radius;}
  void message() {cout << "This is a Circle" << endl;);
};


#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

class Triangle {

private:
  float base, height;

public:
  Triangle();
  Triangle(float base, float height);
  float get_area();
};

#endif      // RECTANGLE_H
