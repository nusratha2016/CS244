#include "poly.h"
int main() {
  base *bptr;
  derived d;
  bptr = &d;

  bptr -> print();
  bptr -> show();
  return 0;

}
