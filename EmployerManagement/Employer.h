#pragma once
#include "iostream"
#include "stdio.h"
#include "string.h"
#include "Department.h"

using namespace std;

class Employer {
private:
	char MaNV[5];
	char TenNV[150];
	char SoDT[20];
	char NgSinh[30];
	Department* department;

public:
	int LoaiNV;
	Employer();

	~Employer();

	// void addEmployer(char MaNV[4], char TenNV[150], char SoDT[20], char NgSinh);
	virtual void NhapNhanVien();
	virtual void XuatNhanVien();

	void SetDepartment(Department* department);
};