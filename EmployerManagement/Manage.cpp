#include "stdafx.h"
#include "Manage.h"


void Manage::NhapDepartment() {
	cout << "Nhap so phong ban:"; 
	cin >> this->departmentCount;
	while (this->departmentCount <= 0) {
		cout << "So phong ban phai > 0. Xin vui long nhap lai so phong ban:";
		cin >> this->departmentCount;
	}
	cin.ignore();

	departments = new Department* [departmentCount];

	for (int i = 0; i < this->departmentCount; i++)
	{
		departments[i] = new Department ();
		cout << "-----------------------------------" << endl;
		cout << "Nhap phong ban thu " << i + 1 << endl;
		departments[i]->NhapPhong();
	}
}


void Manage::XuatDepartment() {
	for (int i = 0; i < this->departmentCount; i++) {
		cout << "---------------------------------\n";
		cout << "Thong tin phong thu " << i + 1 << "\n";
		departments[i]->XuatPhong();
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
	cin.ignore();
	this->employers = new Employer* [departmentCount];

	for (int i = 0; i < this->employerCount; i++)
	{
		int choice;
		do {
			cout << "Nhap loai nhan vien: (1-Bien che/ 2-Cong nhat)" << endl;
			cin >> choice;
		} while (choice != 1 && choice != 2);
		cin.ignore();
		cout << "-----------------------------------" << endl;
		cout << "Nhap nhan vien thu " << i + 1 << endl;
		switch (choice) {
		case 1:
			employers[i] = new FulltimeEmployer();
			employers[i]->NhapNhanVien();
			employers[i]->LoaiNV = choice;
			break;
		case 2:
			employers[i] = new PartimeEmployer();
			employers[i]->NhapNhanVien();
			employers[i]->LoaiNV = choice;
			break;

		}
		char MaPhong[5];
		cout << "Nhap ma phong ban cua nhan vien:";
		cin >> MaPhong;
		Department* phongBan = this->FilterDepartmentById(MaPhong);

		while (phongBan == NULL) {
			cout << "Xin vui long nhap ma phong ban hop le cua nhan vien:";
			cin >> MaPhong;
			phongBan = this->FilterDepartmentById(MaPhong);
		}

		this->employers[i]->SetDepartment(phongBan);
		
	}
}

void Manage::XuatNhanVien() {
	for (int i = 0; i < this->employerCount; i++) {
		cout << "---------------------------------\n";
		cout << "Thong tin nhan vien thu " << i + 1 << endl;
		this->employers[i]->XuatNhanVien();
	}
}

//Employer* Manage::TimNhanVien(const char * MaNV)
//{
//	for (int i = 0; i < this->employerCount; i++) {
//		if (std::strcmp(employers[i]->GetMaNV(), MaNV) == 0)
//			return employers[i];
//	}
//	cout << "Khong tim thay nhan vien tuong ung" << endl;
//	return nullptr;
//}

void Manage::XoaNhanVien()
{
	char MaNV[5];
	cout << "Nhap MaNV cua nhan vien can xoa: ";
	cin.clear();
	fflush(stdin);
	cin >> MaNV;

	// Tim nhan vien
	int index = -1;
	Employer *delEmployer;
	for (int i = 0; i < this->employerCount; i++) {
		if (std::strcmp(employers[i]->GetMaNV(), MaNV) == 0)
		{
			index = i;
			delEmployer = employers[i];
			break;
		}
	}
	if (index == -1)
	{
		cout << "Khong tim thay nhan vien " << MaNV << endl;
		return;
	}

	// Xoa nhan vien
	memcpy(employers[index], employers[index + 1], this->employerCount--);
	//delete delEmployer;
}

Department* Manage::FilterDepartmentById(char MaPhong[5]) {
	for (int i = 0; i < this->departmentCount; i++) {
		if (strcmp(this->departments[i]->MaPhong, MaPhong) == 0) {
			cout << this->departments[i]->TenPhong << endl;
			return this->departments[i];
		}
	}
	cout << "Can't find anything" << endl;
	return NULL;
}



//================== For Test ================================
void Manage::CreateDummyData()
{
	Department * d1 = Department::CreateDummnyDepartment("1", "Phong 1");
	Department * d2 = Department::CreateDummnyDepartment("2", "Phong 2");

	Employer *e1 = new PartimeEmployer();
	e1->CreateDummyEmployer("1", "Nhan vien 1", "012127545", "10/10/1996", 2, d1);
	Employer *e2 = new FulltimeEmployer();
	e2->CreateDummyEmployer("2", "Nhan vien 2", "012127545", "01/12/1996", 1, d2);
	Employer *e3 = new FulltimeEmployer();
	e3->CreateDummyEmployer("3", "Nhan vien 3", "012127545", "02/09/1996", 1, d2);

	this->employers = new Employer*[3];
	employers[0] = e1;
	employers[1] = e2;
	employers[2] = e3;

	employerCount = 3;
}