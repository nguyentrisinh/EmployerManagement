#pragma once
#include "Employer.h"
class PartimeEmployer :
	public Employer
{
private:
	int SalaryPerDay;
public:
	PartimeEmployer();
	~PartimeEmployer();
	virtual void NhapNhanVien();
	virtual void XuatNhanVien();
};

