class Circle {
private:
  double radius;

public:
  Circle(double radius =1, double x=0, double y=0):Shape(x,y) {this->radius=radius;}
  void set_radius(double) {this->radius=radius;}
  double get_radius()const {return radius;}
  void message() {cout << "This is a Circle" << endl;);
};


#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;

class Triangle {

private:
  int numOfSides;         // 3
  double Base;
  double Height;
  double sideLength[3];     // double to all elements
public:
  Triangle();
  Triangle(double);
  double get_Area() const;
  int get_Sides() const;
  double get_Base() const;
  double get_Height() const;
  void set_sides(double, double, double);
  void set_Base(double);
  void set_Height(double);
};

#endif      // TRIANGLE_H
