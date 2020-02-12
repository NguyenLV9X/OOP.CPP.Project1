#pragma once
#include "Employees.h"
class CEmployer : public CEmployees
{
private:
	char _cOffice[100];
	unsigned int _uniAllowance;
public:
	void setOffice(char * _Office);
	void setAllowance(unsigned int _Allowance);
	char * getOffice();
	unsigned int getAllowance();
	void Export();
	void Import();
	double payroll();
	CEmployer();
	~CEmployer();
};
