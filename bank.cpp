#include "bank.cc"

int main() {
  BankAccount test(falseAccountNumber, falseBalence);
  assert(falseAccountNumber == test.getAccountNumber());

  test.Deposit(1000);
  assert(test.getBalance() == 1000);

  test.Withdrawal(100.50);
  assert(test.getBalance() == 70.70);


  test.checking(2000);
  assert(test.getBalance() == 3057.67);

  test.saving(300);
  assert(test.getBalance() == 350.50);

  test.Name(Ahmed);
  assert(test.getBalance() == Ak);

  return 0;
}

}
