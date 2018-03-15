all: BankAccountTest

BankAccount.o:
				g++ -c bank.cc

BankAccountTest: BankAccount.o
				g++ -std=c++11 bank.cpp -o BankAccountTest


clean:
				rm -f BankAccountTest BankAccount.o
