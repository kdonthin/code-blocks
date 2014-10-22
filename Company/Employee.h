#pragma once

#include <iostream>
#include <sstream>

using namespace std;

class Employee
{
private:
	string name;
	double pay;

public:
	Employee(string name, double pay)
	{
		this->name = name;
		this->pay = pay;
	}

	string getName()
	{
		return name;
	}

	void setName(string name)
	{
		this->name = name;
	}

	double getPay()
	{
		return pay;
	}

	void setPay(double pay)
	{
		this->pay = pay;
	}

	double setGrossPay(int hours)
	{
	  return pay * hours ;
	}

	string toString()
	{
		stringstream sstr;

		sstr << "Name : " << name << ", Pay : " << pay << " per Hour." ;

		return sstr.str();
	}
};

