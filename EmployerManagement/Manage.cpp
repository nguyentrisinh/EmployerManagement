#include "stdafx.h";
#include "Manage.h";


void Manage::NhapDepartment() {
	cout << "Nhap so phong ban:"; 
	cin >> this->departmentCount;
	// scanf_s("%d", &this->departmentCount);
	while (this->departmentCount <= 0) {
		cout << "So phong ban phai > 0. Xin vui long nhap lai so phong ban:";
		cin >> this->departmentCount;
		// scanf_s("%d", &this->departmentCount);
	}
	fflush(stdin);
	departments = new Department [departmentCount];

	for (int i = 0; i < this->departmentCount; i++)
	{
		fflush(stdin);
		cout << "-----------------------------------" << endl;
		cout << "Nhap phong ban thu " << i + 1 << endl;
		departments[i].NhapPhong();
	}
}


void Manage::XuatDepartment() {
	for (int i = 0; i < this->departmentCount; i++) {
		cout << "---------------------------------\n";
		cout << "Thong tin phong thu " << i + 1 << "\n";
		departments[i].XuatPhong();
	}
}


void Manage::NhapNhanVien() {
	cout << "Nhap so nhan vien:";
	cin >> this->employerCount;
	// scanf_s("%d", &this->departmentCount);
	while (this->employerCount <= 0) {
		cout << "So phong ban phai > 0. Xin vui long nhap lai so phong ban:";
		cin >> this->employerCount;
	}
	fflush(stdin);
	this->employers = new Employer* [departmentCount];

	for (int i = 0; i < this->employerCount; i++)
	{
		employers[i] = new Employer();
		cout << "-----------------------------------" << endl;
		cout << "Nhap nhan vien thu " << i + 1 << endl;
		employers[i]->NhapNhanVien();
	}
}

void Manage::XuatNhanVien() {
	for (int i = 0; i < this->employerCount; i++) {
		cout << "---------------------------------\n";
		cout << "Thong tin nhan vien thu " << i + 1 << endl;
		this->employers[i]->XuatNhanVien();
	}
}