#include "stdafx.h";
#include "Employer.h"


Employer::Employer() {

}

Employer::~Employer() {

}

void Employer::NhapNhanVien() {
	cout << "Nhap ma nhan vien:";
	fflush(stdin);
	cin >> MaNV;
	cout << MaNV << endl;
	cout << "Nhap ten nhan vien:";
	fflush(stdin);
	cin >> TenNV;
	cout << "Nhap so dien thoai:";
	cin >> SoDT;
	cout << "Nhap ngay sinh:";
	cin >> NgSinh;
}

void Employer::XuatNhanVien() {
	cout << "Ma nhan vien:" << MaNV << endl;
	cout << "Ten nhan vien:" << TenNV << endl;
	cout << "Dien thoai:" << SoDT << endl;
	cout << "Ngay sinh:" << NgSinh << endl;
}
