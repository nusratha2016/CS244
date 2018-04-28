/*
// Nusrath Ahmed
// 03-13-2018
*/

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream> // cout
#include <string>
#include <stdlib>
#include <assert>

using namespace std;

#define SIZE 5

class BankAccount {
private:
  int AccountNumber;
  int Balance;
  double checking;
  double saving;
  string Name;
};

public:
  BankAccount();
  BankAccount(double checking, double saving);
  double getCheckings();
  double getSavings();
  double getBalance() const;
  void setBalance(double myBalance);
  void checkingDeposit(double amount);
  void savingDeposit(double amount);
  void checkingWithdrawal(double amount);
  void savingsWithdrawal(double amount);
  void closeSavings();
  void Deposit(int amount);
  void Withdrawal(int amount);
};

#endif // BANKACCOUNT_H
