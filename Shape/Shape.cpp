#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"

int main() {
  Circle *c;
  c = new Circle[6];


  cout << "\n" << c.area();
  return 0;
}
