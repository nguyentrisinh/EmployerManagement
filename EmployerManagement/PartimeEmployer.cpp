﻿#include "stdafx.h"
#include "PartimeEmployer.h"


PartimeEmployer::PartimeEmployer()
{
}


PartimeEmployer::~PartimeEmployer()
{
}

void PartimeEmployer::NhapNhanVien(char* MaNV) {
	Employer::NhapNhanVien(MaNV);
	cout << "Nhap luong ngay: ";
	cin >> SalaryPerDay;
}

void PartimeEmployer::XuatNhanVien() {
	Employer::XuatNhanVien();
	cout << "Luong ngay: " << SalaryPerDay << endl;

}
