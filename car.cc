#include "car.h"

Car::Car() {
  speed = 0;
  index = 0;
  direction = direction[index];
}

Car::Car(double getSpeed, char getDirection) {
  speed = getSpeed
  for(int i = o; i < SIZE; i++) {
    if(newdirection == direction[i]);
    direction = newDirection;
    index = 1;
    return 0;
  }
}

double Car::getSpeed() const {
  return speed;
}

char Car::getDirection() const {
  return direction;
}

void Car::changeDirection(char getDirection) {
    for(int i = o; i < SIZE; i++){
      if(newDirection == direction[i]);
      direction = newDirection;
      index = 1;
      return 0;
    }
    if(newdirection == 'L') {
      if(index - 1 == 1){
        index == SIZE - 1;
      }else {
        index += 1;
      }
    } else if(newDirection == 'R') {
      if(indez + 1 == SIZE){
        index += SIZE - 1){
      }else{
        index += 1;
      }
    } else if(newDirection == 'U') {
      if(index + 2 > SIZE -1){
        index += 2){
      } else{
        index += 2;
      }
    }
      direction = direction[index];
  }

void Car::changeSpeed(double newSpeed) {
  speed = newSpeed;
}

bool Car::isGoingForward() const {
    if(speed > 0){
      return true;
    }
    return false;
}
