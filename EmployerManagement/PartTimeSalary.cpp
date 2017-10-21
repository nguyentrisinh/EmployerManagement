#include "PartTimeSalary.h"

PartTimeSalary::PartTimeSalary() {

}

PartTimeSalary::~PartTimeSalary() {

}

void PartTimeSalary::TinhLuong(int thang, int nam, Employer* employer) {
	Salary::TinhLuong(thang, nam, employer);
	
	cout << "\tNhap so ngay lam viec: "; cin >> workingDay;
	PartimeEmployer* partimeEmployer = ((PartimeEmployer*)employer);

	this->Luong = partimeEmployer->SalaryPerDay * this->workingDay;
}

void PartTimeSalary::XuatLuong() {
	cout << "So ngay lam viec: " << this->workingDay << endl;
	Salary::XuatLuong();
}