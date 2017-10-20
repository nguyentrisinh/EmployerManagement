#pragma once
#include "iostream"
#include "stdio.h"
#include "Employer.h"

using namespace std;


class Salary {
public:
	int Thang;
	int Nam;
	float Luong;
	Employer* employer;

	Salary();
	~Salary();

	virtual void TinhLuong(int thang, int nam, Employer* employer);

	virtual void XuatLuong();
};