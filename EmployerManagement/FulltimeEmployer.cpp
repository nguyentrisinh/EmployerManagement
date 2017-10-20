#include "stdafx.h"
#include "FulltimeEmployer.h"


FulltimeEmployer::FulltimeEmployer()
{
	
}


FulltimeEmployer::~FulltimeEmployer()
{

}

void FulltimeEmployer::NhapNhanVien() {
	Employer::NhapNhanVien();
	cout << "Nhap Luong co ban: " <<endl;
	cin >> SalaryPerMonth;
	cout << "Nhap He so luong:" << endl;
	cin >> SalaryLevel;
	cout << "Nhap Tien tro cap: " << endl;
	cin >> Allowance;
}

void FulltimeEmployer::XuatNhanVien() {
	Employer::XuatNhanVien();
	cout << "Luong co ban" << SalaryPerMonth << endl;
	cout << "He so luong" << SalaryLevel << endl;
	cout << "Tien tro cap: " << Allowance << endl;
}
