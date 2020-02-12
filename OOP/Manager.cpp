#include "Manager.h"

void CManager::Export()
{
	cout << "Manager" << endl;
	CEmployees::Export();
	cout << "Chuc vu: " << _cOffice << endl;
	cout << "He so chuc vu: " << _unsCoefficient << endl;
}

void CManager::Import()
{
	CEmployees::Import();
	cout << "Nhap chuc vu: ";
	fflush(stdin);
	cin.getline(_cOffice, 100);
	do
	{
		cout << "Nhap he so chuc vu (0 or 1) : ";
		cin >> _unsCoefficient;
	} while (_unsCoefficient != 0 && _unsCoefficient != 1);
	cout << "Nhap tien thuong: ";
	cin >> _uniReward;
}

double CManager::payroll()
{
	return _wage + _wage * _unsCoefficient + _uniReward;
}


CManager::CManager()
{
	this->_wage = 1000;
}


CManager::~CManager()
{
}

istream & operator>>(istream & is, CManager & ma)
{
	/*is >> static_cast<CEmployees &>(ma);*/
	CEmployees &Temp = ma;
	is >> Temp;
	cout << "Nhap chuc vu: ";
	is.ignore();
	is.getline(ma._cOffice, 100);
	cout << "Nhap he so chuc vu: ";
	is >> ma._unsCoefficient;
	cout << "Nhap tien thuong: ";
	is >> ma._uniReward;
	return is;
}

ostream & operator<<(ostream & os, CManager & ma)
{
	CEmployees &Temp = ma;
	os << Temp;
	os << "Chuc vu: " << ma._cOffice << endl;
	os << "He so chuc vu: " << ma._unsCoefficient << endl;
	return os;
}
void CManager::setOffice(char * _Office)
{
	strcpy_s(_cOffice, _Office);
}
void CManager::setCoefficient(unsigned short _Coefficient)
{
	_unsCoefficient = _Coefficient;
}
void CManager::setReward(unsigned int _Reward)
{
	_unsCoefficient = _Reward;
}
char * CManager::getOffice()
{
	return _cOffice;
}
unsigned int CManager::getReward()
{
	return _uniReward;
}
unsigned short CManager::getCoefficient()
{
	return _unsCoefficient;
}