#include "stdafx.h"
#include "Department.h"


Department::Department() {

}

Department::~Department() {

}

void Department::NhapPhong() {
	cout << "Nhap ma phong: "; 
	cin >> MaPhong;
	cout << "Nhap ten phong: "; 
	cin >> TenPhong;
}

void Department::XuatPhong() {
	cout << "Ma phong: " << MaPhong << "\n";
	cout << "Ten phong: " << TenPhong << "\n";
}










// ================= For Test ======================
Department* Department::CreateDummnyDepartment(char* MaPhong, char* TenPhong)
{
	Department * deparment = new Department();
	strcpy_s(deparment->MaPhong, MaPhong);
	strcpy_s(deparment->TenPhong, TenPhong);
	return deparment;
}
