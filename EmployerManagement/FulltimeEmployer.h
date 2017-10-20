#pragma once
#include "Employer.h"
class FulltimeEmployer :
	public Employer
{
public :

	int Allowance;
	int SalaryPerMonth;
	float SalaryLevel;

public:
	FulltimeEmployer();
	~FulltimeEmployer();
	virtual void NhapNhanVien();
	virtual void XuatNhanVien();
};

