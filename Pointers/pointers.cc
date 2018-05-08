#include "pointers.cc"

int main() {
  Rational *rp;
  int a, b;
  cin >> a >> b;
  rp = new Rational(a,b);
  (*rp).Display();                // rp->Display(); can be used also
    rp -> Display();
  delete rp;
  rp = NULL;

  return 0;
}
