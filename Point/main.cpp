#include <iostream>
using namespace std;
#include "point.cc"

int main() {
  Point P1
  Point P2(14, 24);
  cout << "\n("<< P1.get_X() <<", "<<P1.get_Y()<<")\n";
  cout << "\n("<< P2.get_X() <<", "<<P2.get_Y()<<")\n";

  return 0;
}
