#include "Salary.h"

Salary::Salary() {

}

Salary::~Salary() {

}

void Salary::TinhLuong(int thang, int nam, Employer* employer) {
	this->Thang = thang;
	this->Nam = nam;
	this->employer = employer;
}

void Salary::XuatLuong() {
	cout << "Tong luong la: " << this->Luong << endl;
}