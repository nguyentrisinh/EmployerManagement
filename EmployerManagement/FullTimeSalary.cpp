#include "FullTimeSalary.h"


FullTimeSalary::FullTimeSalary() {

}

FullTimeSalary::~FullTimeSalary() {

}


void FullTimeSalary::TinhLuong(int thang, int nam, Employer* employer) {
	Salary::TinhLuong(thang, nam, employer);

	// Ep kieu cho employer tro thanh nhan vien full time
	FulltimeEmployer* fulltimeEmployer = ((FulltimeEmployer*)employer);

	// Cong thuc tinh luong cua nhan vien full time
	this->Luong = fulltimeEmployer->SalaryPerMonth * fulltimeEmployer->SalaryLevel + fulltimeEmployer->Allowance;
}

void FullTimeSalary::XuatLuong() {
	Salary::XuatLuong();
}