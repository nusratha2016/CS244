#ifndef RAT_H
#define RAT_H
#include <iostream>
using namespace std;

class Rational
{
   private:
      int numerator;
      int denominator;
   public:
      Rational(int n, int d);
      void Display();
};

//void Rational::Display() {
  //cout << "Display from Rational:";
  //cout << numerator << "/" << endl;
//}

//Rational::Rational(int a, int b) {
  //numerator = a;
  //denominator = b;
//}

//int main() {
  //Rational *rp;
  //int a, b;
  //cin >> a >> b;
  //rp = new Rational(a,b);
  //(*rp).Display(); // rp->Display(); can be used also
  //rp -> Display();
//delete rp;
//rp = NULL;

//return 0;
//}

#endif            //RAT_H
