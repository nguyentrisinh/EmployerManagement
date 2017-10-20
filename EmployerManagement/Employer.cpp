#include "stdafx.h"
#include "Employer.h"
//#include "PartimeEmployer.h"
//#include "FulltimeEmployer.h"


Employer::Employer() {

}

Employer::~Employer() {

}

char* Employer::GetMaNV()
{
	return this->MaNV;
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
	cout << "Ten phong ban:" << this->department->TenPhong << "\nMa phong ban:" << this->department->MaPhong << endl;
}

void Employer::SetDepartment(Department* department) {
	this->department = department;
}






















//======================== For test ===========================
void Employer::CreateDummyEmployer(char* MaNV, char* TenNV, char* SoDT, char* NgSinh, int loaiNV, Department* devepartment)
{
	/*Employer * emp;
	if (loaiNV == 1) {
		emp = new FulltimeEmployer();
	}
	else if (loaiNV == 2){
		emp = new PartimeEmployer();
	}
	else return;*/
	this->LoaiNV = loaiNV;
	
	strcpy_s(this->MaNV,  MaNV);
	strcpy_s(this->TenNV, TenNV);
	strcpy_s(this->SoDT, SoDT);
	strcpy_s(this->NgSinh, NgSinh);
	this->department = devepartment;

	//return Employer;
}