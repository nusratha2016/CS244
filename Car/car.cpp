#include "car.cc"

int main(){
  Car handle(36, 'S');

  assert(handle.getSpeed() == 36);
  assert(handle.getDirection() == 'S');

  handle.changeDirection('L');

  assert(handle.getDirection() == 'E');
  assert(handle.isGoingForward() == true);

  handle.changeSpeed(-18);

  assert(handle.isGoingForward() == false);

  return 0;
}
