#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Shape {       // This the Base class

private:
  int center_x;
  int center_y;
  //float area ;
  //float perimeter;
public:
  int get_center_x();
  int get_center_y();
  float get_area();
  float get_perimeter();
};

#endif   // SHAPE_H
