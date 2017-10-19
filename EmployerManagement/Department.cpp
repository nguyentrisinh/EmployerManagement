#include "stdafx.h";
#include "Department.h"


Department::Department() {

}

Department::~Department() {

}

void Department::NhapPhong() {
	cout << "Nhap ma phong:"; 
	gets_s(MaPhong);
	cout << "Nhap ten phong:"; 
	gets_s(TenPhong);
}

void Department::XuatPhong() {
	cout << "Ma phong:" << MaPhong << "\n";
	cout << "Ten phong:" << TenPhong << "\n";
}
