#pragma once
#include "iostream"
#include "stdio.h"
#include "string.h"
#include "Department.h"
//#include "PartimeEmployer.h"
//#include "FulltimeEmployer.h"

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
	char* GetMaNV();
	char* GetTenNV();
	char* GetLoaiNV();
	void SetTenNV(char * TenNV);
	void SetSoDT(char * SoDT);
	void SetNgSinh(char * NgSinh);


	// void addEmployer(char MaNV[4], char TenNV[150], char SoDT[20], char NgSinh);
	virtual void NhapNhanVien();
	virtual void XuatNhanVien();

	void SetDepartment(Department* department);



	//============ For test ================
	void CreateDummyEmployer(char* MaNV, char* TenNV, char* SoDT, char* NgSinh, int loaiNV, Department* devepartment);
};