#pragma once
#include<iostream>
using namespace std;

class CDate
{
private:
	unsigned int _uinDay;
	unsigned int _uinMonth;
	unsigned int _uinYear;
public:
	friend istream & operator >>(istream & is, CDate & d);
	friend ostream & operator <<(ostream & os, const CDate & d);
	void setDay(unsigned int set_Day);
	void setMonth(unsigned int set_Month);
	void setYear(unsigned int set_Year);
	unsigned int getDay();
	unsigned int getMonth();
	unsigned int getYear();
	CDate();
	~CDate();
};