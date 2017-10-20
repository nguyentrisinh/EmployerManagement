#pragma once
#include <iostream>
#include <vector>
#include "stdio.h"
#include "String.h"
#include "Department.h"
//#include "Employer.h"
#include "PartimeEmployer.h"
#include "FulltimeEmployer.h"

using namespace std;

class Manage {
private:
	vector<Department*> departments;
	vector<Employer*> employers;

public:
	Manage() {}
	~Manage() {}

	void NhapDepartment();
	void XuatDepartment();
	Department* FilterDepartmentById(char MaPhong[5]);

	void NhapNhanVien();
	void XuatNhanVien();

	//Employer* TimNhanVien(const char* MaNV);
	void XoaNhanVien();




	void CreateDummyData();
};