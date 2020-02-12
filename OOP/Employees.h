#pragma once
#include"Date.h"
#include<cstring>
class CEmployees
{
protected:
	char _cAccount[100];
	char _cName[100];
	CDate _cdDate;
	char _cEmail[100];
	int _inPhone;
	char _cAddress[100];
	unsigned int _wage;
public:
	virtual void Export();
	virtual void Import();
	virtual double payroll() = 0;
	void showwage();
	friend istream & operator >> (istream & is, CEmployees & em);
	friend ostream & operator << (ostream & os, const CEmployees & em);
	void setAccount(char * _Account);
	void setName(char * _Name);
	void setEmail(char * _Email);
	void setPhone(int _Phone);
	void setAddress(char * _Address);
	void setWage(unsigned int _Wage);
	void setDate(CDate _Date);
	char * getAccount();
	char * getName();
	char * getEmail();
	int getPhone();
	char * getAddress();
	unsigned int getWage();
	CDate getDate();
	CEmployees();
	~CEmployees();
};
