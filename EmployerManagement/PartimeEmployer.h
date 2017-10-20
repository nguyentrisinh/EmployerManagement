#pragma once
#include "Employer.h"
class PartimeEmployer :
	public Employer
{
public:
	int SalaryPerDay;
public:
	PartimeEmployer();
	~PartimeEmployer();
	virtual void NhapNhanVien();
	virtual void XuatNhanVien();
};

