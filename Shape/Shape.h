#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {       // This the Base class

private:
  int x;
  int y;
  //float area ;
  //float perimeter;
public:
  Shape();
  Shape(int, int);
  void setX(int);
  void setY(int);
  int getX();
  int getY();
};

Shape::Shape() {
  x = y = 0;
}

Shape::Shape(int x, int y) {
  this->x = x;
  this->y = y;
}

void Shape::setX(int x) {
  this->x = x;
}

void Shape::setY(int y) {
  this->y = y;
}

int Shape::getX() {
  return x;
}

int Shape::getY() {
  return y;
}

#endif   // SHAPE_H
