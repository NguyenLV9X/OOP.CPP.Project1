#include "Date.h"

void CDate::setDay(unsigned int set_Day)
{
	this->_uinDay = set_Day;
}

void CDate::setMonth(unsigned int set_Month)
{
	this->_uinMonth = set_Month;
}

void CDate::setYear(unsigned int set_Year)
{
	this->_uinYear = set_Year;
}

unsigned int CDate::getDay()
{
	return this->_uinDay;
}

unsigned int CDate::getMonth()
{
	return this->_uinMonth;
}

unsigned int CDate::getYear()
{
	return this->_uinYear;
}

CDate::CDate()
{
	this->_uinDay = 0;
	this->_uinMonth = 0;
	this->_uinYear = 0;
}

CDate::~CDate()
{
}

istream & operator>>(istream & is, CDate & d)
{
	cout << "Nhap ngay: ";
	is >> d._uinDay;
	cout << "Nhap thang: ";
	is >> d._uinMonth;
	cout << "Nhap nam: ";
	is >> d._uinYear;
	return is;
}

ostream & operator<<(ostream & os, const CDate & d)
{
	os << "Ngay sinh: " << d._uinDay << "/" << d._uinMonth << "/" << d._uinYear;
	return	os;
}