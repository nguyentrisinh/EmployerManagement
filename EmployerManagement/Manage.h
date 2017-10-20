#pragma once
#include <iostream>
#include <vector>
#include "stdio.h"
#include "String.h"
#include "Department.h"
//#include "Employer.h"
#include "PartimeEmployer.h"
#include "FulltimeEmployer.h"
#include "FullTimeSalary.h"
#include "PartTImeSalary.h"
#include "Screens.h"
#include <windows.h>

using namespace std;

class Manage {
private:
	vector<Department*> departments;
	vector<Employer*> employers;
	vector<Salary*> salaries;

public:
	Manage() {}
	~Manage() {}

	void NhapDepartment();
	void XuatDepartment();

	Department* FilterDepartmentById(char MaPhong[5]);
	int TimViTriNhanVien(const char* MaNV); // tra ve vi tri nhan vien


	void NhapDanhSachNhanVien();
	void XuatDanhSachNhanVien();

	void NhapNhanVien();
	void XuatNhanVien();
	void XoaNhanVien();
	void SuaNhanVien();

	void NhapLuong();
	void XuatLuong();
	
	vector<Employer*> DanhSachNhanVienTheoPhongBan();





	void CreateDummyData();

	Employer* GetEmployer(int pos) {
		return employers[pos];
	}

	vector <Employer*> GetListEmployer() {
		return employers;
	}

	vector <Department*> GetListDepartment() {
		return departments;
	}
};