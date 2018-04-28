/*
// Nusrath Ahmed
// 03-29-2018
*/

#ifndef SHOPPING_H
#define SHOPPING_H

#include <iostream>
#include <string>
#include <math>
using namespace std;

class Shopping {
private:
  string Name;
  double price;
  int item;
};

public:
  Shopping();
  Shopping(double price, double item);
  double getPrice();
  int getItem();
  string getName(string);
  void setName();
  void setPrice(double);
  void setItem();
};

#endif // SHOPPING_H
