#pragma once
#include "Employees.h"
class CManager : public CEmployees
{
private:
	char _cOffice[100];
	unsigned short _unsCoefficient;
	unsigned int _uniReward;
public:
	void setOffice(char * _Office);
	void setCoefficient(unsigned short _Coefficient);
	void setReward(unsigned int _Reward);
	char * getOffice();
	unsigned int getReward();
	unsigned short getCoefficient();
	void Export();
	void Import();
	double payroll();
	friend istream & operator>>(istream & is, CManager & ma);
	friend ostream & operator<<(ostream & os, CManager & ma);
	CManager();
	~CManager();
};