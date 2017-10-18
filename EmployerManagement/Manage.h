#pragma once
#include "iostream"
#include "stdio.h"
#include "Department.h"
#include "Employer.h"

using namespace std;


class Manage {
private:
	int departmentCount;
	Department** departments;

	int employerCount;
	Employer** employers;

public:
	Manage() {}
	~Manage() {}

	void NhapDepartment();
	void NhapEmployer();
};