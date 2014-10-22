#pragma once

#include "Employee.h"

class Manager : public Employee
{
private:
  bool salaried ;

public:
  Manager(string name, double pay, bool isSalaried) : Employee(name, pay)
  {
    salaried = isSalaried ;
  }

  string toString()
  {
    stringstream sstr ;

    sstr << "Name : " << getName() ;

    sstr << ", Pay : " << getPay() ;

    if ( salaried )
    {
      sstr << " per Month." ;
    }
    else
    {
      sstr << " per Hour." ;
    }

    return sstr.str() ;
  }
};
