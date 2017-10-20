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

char * Employer::GetTenNV()
{
	return this->TenNV;
}

char * Employer::GetLoaiNV()
{
	return this->LoaiNV == 1 ? "Bien che" : "Cong nhat";
}

Department * Employer::GetDeparment()
{
	return this->department;
}

void Employer::SetTenNV(char *TenNV)
{
	strcpy_s(this->TenNV, TenNV);
}

void Employer::SetSoDT(char * SoDT)
{
	strcpy_s(this->SoDT, SoDT);
}

void Employer::SetNgSinh(char * NgSinh)
{
	strcpy_s(this->NgSinh, NgSinh);
}

void Employer::NhapNhanVien() {
	cout << "MaNV: ";
	cin >> MaNV;
	cout << "Ho ten: ";
	cin >> TenNV;
	cout << "SDT:";
	cin >> SoDT;
	cout << "Ngay sinh:";
	cin >> NgSinh;
}

void Employer::XuatNhanVien() {
	cout << "MANV:\t" << MaNV << "\t";
	cout << "Ten nhan vien:\t" << TenNV << "   ";
	if (LoaiNV == 1)
		cout << "(Nhan vien bien che)" << endl;
	else
		cout << "(Nhan vien thoi vu)" << endl;
	cout << "Dien thoai:\t" << SoDT << endl;
	cout << "Ngay sinh:\t" << NgSinh << endl;
	cout << "Ten phong ban:\t" << this->department->TenPhong << "\nMa phong ban:\t" << this->department->MaPhong << endl;
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