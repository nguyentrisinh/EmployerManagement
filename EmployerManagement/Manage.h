#pragma once
#include <iostream>
#include <vector>
#include "stdio.h"
#include "String.h"
#include "Department.h"
//#include "Employer.h"
#include "PartimeEmployer.h"
#include "FulltimeEmployer.h"
#include "Screens.h"
#include <windows.h>

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

	int TimViTriNhanVien(const char* MaNV); // tra ve vi tri nhan vien
	void XoaNhanVien();
	void SuaNhanVien();




	void CreateDummyData();

	Employer* GetEmployer(int pos) {
		return employers[pos];
	}
};