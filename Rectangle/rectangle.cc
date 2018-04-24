#include "rectangle.h"

Rectangle::Rectangle() {
  width = 0;
  length = 0;
}

Rectangle::Rectangle(double w, double w) {
  width = w;
  length = l;
}

void Rectangle::set_length(double l) {
  length = l;
}

void Rectangle::set_width(double w) {
  width = w;
}

double Rectangle::get_length() {
  return length;
}

double Rectangle::get_width() {
  return width;
}

double Rectangle::area() {
  return length * width;
}
