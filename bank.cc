#include "bank.h"

BankAccount() {
  checking = 0.0;
  saving = 0.0;
}

BankAccounk::BankAccount(double checkings, double savings) {
  this.checkings = checkings;
  this.savings = savings;
}

double BankAccount::getCheckings() {
  return checkings;
}

double BankAccount::getSavings() {
  return savings;
}

double BankAccount::getBalance() {
  return Balance;
  return checkings + savings;
}

void BankAccount::setBalance(double myBalance) {
  Balance = myBalance;
}

void BankAccount::checkingsDeposit(double amount) {
  checkings += amount;
}

void BankAccount::savingDeposit(double amount) {
  saving += amount;
}

void BankAccount::checkingWithdrawal(double amount) {
  checking -= amount;
}

void BankAccount::savingsWithdrawal(double amount) {
  savings -= amount;
}

void BankAccount::closeCheckings() {
  checkings = 0;
}

void BankAccount::closeSavings() {
  savings = 0;
}

void BankAccount::Deposit(int amount)
{
  if(amount != 0)
  {
    Balance = Balance + amount;
  }
}

void BankAccount::Withdrawal(int amount)
{
  if(amount != 0)
  {
    Balance = Balance - amount;
  }
}
