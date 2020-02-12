#include "Employer.h"
void CEmployer::Export()
{
	cout << "Employer" << endl;
	CEmployees::Export();
	cout << "Nhiem Vu: " << _cOffice << endl;
	cout << "Tro cap: " << _uniAllowance << endl;
}

void CEmployer::Import()
{
	CEmployees::Import();
	cout << "Nhap nhiem vu nhan vien: ";
	fflush(stdin);
	cin >> _cOffice;
	cout << "Nhap tro cap: ";
	cin >> _uniAllowance;
}

double CEmployer::payroll()
{
	return _wage * _uniAllowance;
}

CEmployer::CEmployer()
{
	this->_wage = 950;
}


CEmployer::~CEmployer()
{
}

void CEmployer::setOffice(char * _Office)
{
	strcpy_s(_cOffice, _Office);
}
void CEmployer::setAllowance(unsigned int _Allowance)
{
	_uniAllowance = _Allowance;
}
char * CEmployer::getOffice()
{
	return _cOffice;
}
unsigned int CEmployer::getAllowance()
{
	return _uniAllowance;
}