#pragma once
#include "Employer.h"
class FulltimeEmployer :
	public Employer
{
public :

	int Allowance;
	int SalaryPerMonth;
	float SalaryLevel;

	//int Allowance = 80000;
	//int SalaryPerMonth = 9000000;
	//float SalaryLevel = 1.6;

public:
	FulltimeEmployer();
	~FulltimeEmployer();
	virtual void NhapNhanVien(char* MaNV);
	virtual void XuatNhanVien();
};

