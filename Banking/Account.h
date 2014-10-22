#pragma once

# include <iostream>

using namespace std ;

class Account
{
protected:
  double balance ;

public:
  Account(double balance)
  {
    this->balance = balance ;
  }

  void credit(double amount)
  {
    balance += amount ;
  }

  void debit(double amount)
  {
    if (amount < balance)
    {
      balance -= amount ;
    }
    else
    {
      cout << "Insufficient funds." << endl ;
    }
  }

  double getBalance()
  {
    return balance ;
  }
};
