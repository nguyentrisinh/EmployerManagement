#include "stdafx.h"
#include "Employer.h"


Employer::Employer() {

}

Employer::~Employer() {

}

void Employer::NhapNhanVien() {
	cout << "Nhap ma nhan vien:";
	gets_s(MaNV);
	cout << "Nhap ten nhan vien:";
	gets_s(TenNV);
	cout << "Nhap so dien thoai:";
	gets_s(SoDT);
	cout << "Nhap ngay sinh:";
	gets_s(NgSinh);
}

void Employer::XuatNhanVien() {
	cout << "Ma nhan vien:" << MaNV << endl;
	cout << "Ten nhan vien:" << TenNV << endl;
	cout << "Dien thoai:" << SoDT << endl;
	cout << "Ngay sinh:" << NgSinh << endl;
}
