#pragma once
#include "Employees.h"
class CProgrammer : public CEmployees
{
private:
	unsigned short _unsWtime;
	unsigned short _unsOtime;
	unsigned int _uniAllowance;
public:
	void setWtime(unsigned short _Wtime);
	void setOtime(unsigned short _Otime);
	void setAllowance(unsigned int _Allowance);
	unsigned short getWtime();
	unsigned short getOtime();
	unsigned int getAllowance();
	void Export();
	void Import();
	double payroll();
	CProgrammer();
	~CProgrammer();
};

