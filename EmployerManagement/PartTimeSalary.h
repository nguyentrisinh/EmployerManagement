#pragma once
#include "iostream"
#include "stdio.h"
#include "Salary.h"
#include "PartimeEmployer.h"


class PartTimeSalary :
	public Salary
{
public:
	int workingDay;

	PartTimeSalary();
	~PartTimeSalary();

	virtual void TinhLuong(int thang, int nam, Employer* employer);
	virtual void XuatLuong();
};
