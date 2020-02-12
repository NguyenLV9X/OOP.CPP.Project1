#include "Company.h"


void Company::ImportEmploye(int option)
{
	if (option == 1)
	{
		cout << "NHAP THONG TIN MANAGER" << endl;
		CEmployees *temp = new CManager();
		temp->Import();
		_allEmploye.push_back(temp);
	}
	if (option == 2)
	{
		cout << "NHAP THONG TIN PROGRAMMER" << endl;
		CEmployees *temp = new CProgrammer();
		temp->Import();
		_allEmploye.push_back(temp);

	}
	if (option == 3)
	{
		cout << "NHAP THONG TIN EMPLOYER" << endl;
		CEmployees *temp = new CEmployer();
		temp->Import();
		_allEmploye.push_back(temp);
	}
}

void Company::ExportEmploye()
{
	int lenght = _allEmploye.size();
	if (lenght == 0)
	{
		cout << "Hien tai chua co nhan vien nao !" << endl;;
	}
	else
	{
		cout << "Tong So Nhan Vien: " << lenght << endl;
		cout << endl;
		cout << endl;
		for (int i = 0; i < lenght; ++i)
		{
			cout << "============================================" << endl;
			cout << "THONG TIN NHAN VIEN " << i + 1 << endl;
			_allEmploye[i]->Export();
		}
	}

	cout << "============================================";
	cout << endl;
	cout << endl;
	cout << "Hay an phim enter de quay lai menu chinh" << endl;
	system("pause");
}

void Company::ShowAllWage()
{
	int lenght = _allEmploye.size();
	if (lenght == 0)
	{
		cout << "Hien tai chua co nhan vien nao !" << endl;;
	}
	else
	{
		cout << "Tong So Nhan Vien: " << lenght << endl;
		cout << endl;
		cout << endl;
		for (int i = 0; i < lenght; ++i)
		{
			cout << "============================================" << endl;
			cout << "TONG LUONG NHAN VIEN " << endl;
			_allEmploye[i]->showwage();
		}
	}

	cout << "============================================";
	cout << endl;
	cout << endl;
	cout << "Hay an phim enter de quay lai menu chinh" << endl;
	system("pause");
}

Company::Company()
{
}


Company::~Company()
{
}