﻿#include "stdafx.h"
#include "FulltimeEmployer.h"


FulltimeEmployer::FulltimeEmployer()
{
	Allowance = 80;
	SalaryPerMonth = 9000;
	SalaryLevel = 1.6;
}


FulltimeEmployer::~FulltimeEmployer()
{

}

void FulltimeEmployer::NhapNhanVien(char* MaNV) {
	Employer::NhapNhanVien(MaNV);
	cout << "Nhap Luong co ban: ";
	cin >> SalaryPerMonth;
	cout << "Nhap He so luong: ";
	cin >> SalaryLevel;
	cout << "Nhap Tien tro cap: ";
	cin >> Allowance;
}

void FulltimeEmployer::XuatNhanVien() {
	Employer::XuatNhanVien();
	cout << "Luong co ban: " << SalaryPerMonth << endl;
	cout << "He so luong: " << SalaryLevel << endl;
	cout << "Tien tro cap: " << Allowance << endl;
}
