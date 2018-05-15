#include "point.h"

Point::Point() {
  X = 0;
  Y = 0;
}

Point::Point(double int_X, double int_Y) {
  X = int_X;
  Y = int_Y;
}

void Point::get_X() const {
  return X;
}

double Point::get_Y() const {
  return Y;
}

void Point::setXtoY() {
  X = Y;
}

void Point::setYtoX() {
  Y = X;
}

void Point::shift(double dx, double dy) {
  X += dx;
  Y += dy;
}

void Point::reset(double dx, double dy) {
  X = dx;
  Y = dy;
}
