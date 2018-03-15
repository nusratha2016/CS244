#include "circle.cc"

int main(){
  Circle c;
  assert(c.getcenter_x()== 0);
  assert(c.getcenter_y() == 0);

  c.changeCenter(2.4, 6.4);

  assert(c.getcenter_x()== 2.4);
  assert(c.getcenter_y() == 6.4);

  c.setRadius(6);
  assert(c.getRadius() == 6);

  c.setDiameter();
  assert(c.area() == PI * (pow(c.getRadius(), 2 )) );

  assert(c.circumference() == (2 * PI * c.getRadius()) );

  return 0;

}
