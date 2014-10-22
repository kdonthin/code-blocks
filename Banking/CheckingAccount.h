#pragma once

#include <iostream>
#include "Account.h"

using namespace std ;

class CheckingAccount : public Account
{
private:
  double fee ;

public:
  CheckingAccount(double balance, double fee) : Account(balance)
  {
    this->fee = fee ;
  }

  void debit(double amount)
  {
    if ( balance > amount )
    {
      balance = balance - amount - fee ;
    }
    else
    {
      cout << "Insufficient funds." << endl ;
    }
  }
};
