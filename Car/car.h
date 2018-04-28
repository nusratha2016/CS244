#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>
#include <assert>
using namespace std;

#define SIZE 4

class Car {

private:
  double speed;
  int index;
  string directions = "NESW";
  char direction;
}

public:
  car();
  car(double, char);
  double getSpeed() const;
  char getDirection() const;
  void changeDirection(char);
  void changeSpeed(double);
  bool isGoingForward() const;

};

#endif // CAR_H
