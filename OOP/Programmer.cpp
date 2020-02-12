#include "Programmer.h"
void CProgrammer::Export()
{
	cout << "Programmer" << endl;
	CEmployees::Export();
	cout << "Thoi gian lam viec: " << _unsWtime << endl;
	cout << "Thoi gian lam them: " << _unsOtime << endl;
	cout << "Tro cap: " << _uniAllowance << endl;
}

void CProgrammer::Import()
{
	CEmployees::Import();
	cout << "Nhap thoi gian lam: ";
	cin >> _unsWtime;
	cout << "Nhap thoi gian lam them: ";
	cin >> _unsOtime;
	cout << "Nhap tro cap: ";
	cin >> _uniAllowance;
}

double CProgrammer::payroll()
{
	return _wage + (_wage / _unsWtime) * _unsOtime * 1.5 + _uniAllowance;
}


CProgrammer::CProgrammer()
{
	this->_wage = 800;
}


CProgrammer::~CProgrammer()
{
}

void CProgrammer::setWtime(unsigned short _Wtime)
{
	_unsWtime = _Wtime;
}
void CProgrammer::setOtime(unsigned short _Otime)
{
	_unsOtime = _Otime;
}
void CProgrammer::setAllowance(unsigned int _Allowance)
{
	_uniAllowance = _Allowance;
}
unsigned short CProgrammer::getWtime()
{
	return _unsWtime;
}
unsigned short CProgrammer::getOtime()
{
	return _unsOtime;
}
unsigned int CProgrammer::getAllowance()
{
	return _uniAllowance;
}