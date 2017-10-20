#pragma once
#include "iostream"
#include "stdio.h"
#include "string.h"

using namespace std;


class Department {

public:
	char MaPhong[5];
	char TenPhong[100];

	Department();
	~Department();

	void NhapPhong(char* MaPhong);
	void XuatPhong();


	//============ For test ===================
	static Department* CreateDummnyDepartment(char* MaPhong, char* TenPhong);
};