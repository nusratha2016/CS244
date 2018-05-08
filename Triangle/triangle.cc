#include "triangle.h"

Triangle::Triangle() {
  Base = 0;
  Height = 0;
}

Triangle::Triangle(double) {
  Base = Base;
  Height = Height;
}

double Triangle::get_Area() const {
  return (1/2 * Base * Height);
}
