#include "shopping.h"

Shopping::Shopping() {
  price = 0.0;
  item = 0.0;
  name = "";
}

Shopping::Shopping(double price, int item, string name) {
  this = price;
  this.item = item;
}

double Shopping::getPrice() {
  return price;
}

int Shopping::getItem() {
  return item;
}

void Shopping::setPrice(double shoppingPrice) {
  Price = shoppingPrice;
}

void Shopping::setItem(int shoppingItem) {
  Item = shoppingItem;
}
 string Shopping::getName() {
   return name;
 }

 void shopping::setName(string shoppingName) {
   name = shoppingName;
 }
