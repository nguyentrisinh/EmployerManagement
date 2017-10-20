#include "PartTimeSalary.h"

PartTimeSalary::PartTimeSalary() {

}

PartTimeSalary::~PartTimeSalary() {

}

void PartTimeSalary::TinhLuong(int thang, int nam, Employer* employer) {
	Salary::TinhLuong(thang, nam, employer);
	
	cout << "Nhap so ngay lam viec trong thang:"; cin >> workingDay;
	PartimeEmployer* partimeEmployer = ((PartimeEmployer*)employer);

	this->Luong = partimeEmployer->SalaryPerDay * this->workingDay;
}

void PartTimeSalary::XuatLuong() {
	cout << "So ngay lam viec trong thang:" << this->workingDay << endl;
	Salary::XuatLuong();
}