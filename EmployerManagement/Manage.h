#pragma once
#include <iostream>
#include "stdio.h"
#include "String.h"
#include "Department.h"
#include "Employer.h"
#include "PartimeEmployer.h"
#include "FulltimeEmployer.h"

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
	void XuatDepartment();
	Department* FilterDepartmentById(char MaPhong[5]);

	void NhapNhanVien();
	void XuatNhanVien();
};