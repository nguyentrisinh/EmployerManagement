#include "Manage.h"


void Manage::NhapDepartment() {
	cout << "Nhap so phong ban:"; cin >> this->departmentCount;
	while (this->departmentCount <= 0) {
		cout << "So phong ban phai > 0. Xin vui long nhap lai so phong ban:";
		cin >> this->departmentCount;
	}

	departments = new Department* [departmentCount];

	for (int i = 0; i < this->departmentCount; i++)
	{
		cout << "-----------------------------------\n";
		cout << "Nhap phong ban thu " << i + 1 << "\n";
	}
}