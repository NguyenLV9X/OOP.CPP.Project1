#include "Employees.h"
void CEmployees::Export()
{
	cout << "Ma nhan vien: " << _cAccount << endl;
	cout << "Ten nhan vien: " << _cName << endl;
	cout << _cdDate << endl;
	cout << "Email: " << _cEmail << endl;
	cout << "Phone: " << _inPhone << endl;
	cout << "Dia chi: " << _cAddress << endl;
}

void CEmployees::Import()
{
	cout << "Nhap ma nhan vien: ";
	cin >> _cAccount;
	cout << "Nhap ten: ";
	cin.ignore();
	cin.getline(_cName, 100);
	cin >> _cdDate;
	cout << "Nhap email: ";
	cin >> _cEmail;
	cout << "Nhap sdt: ";
	cin >> _inPhone;
	cout << "Nhap dia chi: ";
	cin.ignore();
	cin.getline(_cAddress, 100);
}

void CEmployees::showwage()
{
	cout << "Ma nhan vien: " << _cAccount << endl;
	cout << "Tong luong: " << payroll() << endl;
}

CEmployees::CEmployees()
{
	this->_wage = 0;
}


CEmployees::~CEmployees()
{
}

istream & operator>>(istream & is, CEmployees & em)
{
	cout << "Nhap ma nhan vien: ";
	is >> em._cAccount;
	cout << "Nhap ten: ";
	is.ignore();
	is.getline(em._cName, 100);
	is >> em._cdDate;
	cout << "Nhap email: ";
	is >> em._cEmail;
	cout << "Nhap sdt: ";
	is >> em._inPhone;
	cout << "Nhap dia chi: ";
	is.ignore();
	is.getline(em._cAddress, 100);
	return is;
}

ostream & operator<<(ostream & os, const CEmployees & em)
{
	os << "Ma nhan vien: " << em._cAccount << endl;
	os << "Ten nhan vien: " << em._cName << endl;
	os << em._cdDate << endl;
	os << "Email: " << em._cEmail << endl;
	os << "Phone: " << em._inPhone << endl;
	os << "Dia chi: " << em._cAddress << endl;
	return os;
}

void CEmployees::setAccount(char* _Account)
{
	strcpy_s(_cAccount, _Account);
}

void CEmployees::setName(char * _Name)
{
	strcpy_s(_cName, _Name);
}

void CEmployees::setEmail(char * _Email)
{
	strcpy_s(_cEmail, _Email);
}

void CEmployees::setPhone(int _Phone)
{
	_inPhone = _Phone;
}
void CEmployees::setAddress(char * _Address)
{
	strcpy_s(_cAddress, _Address);
}
void CEmployees::setWage(unsigned int _Wage)
{
	_wage = _Wage;
}
void CEmployees::setDate(CDate _Date)
{
	_cdDate.setDay(_Date.getDay());
	_cdDate.setMonth(_Date.getMonth());
	_cdDate.setYear(_Date.getYear());
}
char * CEmployees::getAccount()
{
	return _cAccount;
}
char * CEmployees::getName()
{
	return _cName;
}
char * CEmployees::getEmail()
{
	return _cEmail;
}
int CEmployees::getPhone()
{
	return _inPhone;
}
char * CEmployees::getAddress()
{
	return _cAddress;
}
unsigned int CEmployees::getWage()
{
	return _wage;
}
CDate CEmployees::getDate()
{
	return _cdDate;
}