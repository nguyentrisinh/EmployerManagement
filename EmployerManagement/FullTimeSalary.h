#pragma once
#include "iostream"
#include "stdio.h"
#include "Salary.h"
#include "FulltimeEmployer.h"


class FullTimeSalary :
	public Salary 
{

	FullTimeSalary();
	~FullTimeSalary();

	virtual void TinhLuong(int thang, int nam, Employer* employer);
	virtual void XuatLuong();
};
