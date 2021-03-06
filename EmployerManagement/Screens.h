#pragma once
#include "iostream"
#include "stdio.h"
#include "string.h"
#include <typeinfo>
#include <conio.h>
#include <vector>
#include "Employer.h"
#include "FulltimeEmployer.h"
#include "Salary.h"

using namespace std;
static class Screens
{
private:
	static void DisplayEmployerListItem(Employer* employer);
	static void DisplayDepartmentListItem(Department* department);

public:
	Screens();
	~Screens();

	// tra ve keycode
	static char DisplayEditEmployerScreen(Employer* employer);
	static char DisplayMainScreen();
	static char DisplayEmployerScreen(Employer *employer);
	static char DisplayListEmployerScreen(vector<Employer*> employers);
	static char DisplayListDepartmentScreen(vector<Department*> employers);
	static char DisplayEmployerConstrolsScreen();
	static char DisplayDepartmentConstrolsScreen();
	static char DisplayAddEmployerScreen();
	static void DisplaySalaryCalculateHeader();
	static char DisplayFittedListEmployerScreen(vector<Employer*> employers);
	static char DisplayListEmployerBySalary(vector<Employer*> employers, vector<Salary*> salary, int thang, int nam);
};

