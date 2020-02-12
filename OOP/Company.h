#pragma once
#include<vector>
#include"employer.h"
#include"Manager.h"
#include"programmer.h"
class Company
{
private:
	vector<CEmployees *>_allEmploye;
public:
	void ImportEmploye(int option);
	void ExportEmploye();
	void ShowAllWage();
	Company();
	~Company();
};