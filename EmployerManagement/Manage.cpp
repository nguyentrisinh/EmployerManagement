#include "stdafx.h"
#include "Manage.h"


void Manage::NhapDepartment() {
	int departmentCount;
	cout << "Nhap so phong ban:"; 
	cin >> departmentCount;
	while (departmentCount <= 0) {
		cout << "So phong ban phai > 0. Xin vui long nhap lai so phong ban:";
		cin >> departmentCount;
	}
	cin.ignore();
	for (int i = 0; i < departmentCount; i++)
	{
		Department *department = new Department ();
		cout << "-----------------------------------" << endl;
		cout << "Nhap phong ban thu " << i + 1 << endl;
		department->NhapPhong();
		departments.push_back(department);
	}
}


void Manage::XuatDepartment() {
	for (int i = 0; i < departments.size(); i++) {
		cout << "---------------------------------\n";
		cout << "Thong tin phong thu " << i + 1 << "\n";
		departments[i]->XuatPhong();
	}
}


void Manage::NhapDanhSachNhanVien() {
	int employerCount;
	cout << "Nhap so nhan vien:";
	cin >> employerCount;
	// scanf_s("%d", &this->departmentCount);
	while (employerCount <= 0) {
		cout << "So nhan vien khong hop le. Xin vui long nhap lai so nhan vien:";
		cin >> employerCount;
	}
	cin.ignore();

	for (int i = 0; i < employerCount; i++){
		NhapNhanVien();
	}
	system("cls");
	cout << "Them nhan vien thanh cong!";
	Sleep(3000);
}

void Manage::XuatDanhSachNhanVien() {
	for (int i = 0; i < employers.size(); i++) {
		cout << "---------------------------------\n";
		cout << "Thong tin nhan vien thu " << i + 1 << endl;
		this->employers[i]->XuatNhanVien();
	}
}

void Manage::NhapNhanVien()
{
	int type = -1;
	while (type != 1 && type != 2) {
		cout << "Nhap loai nhan vien: (1-Bien che/ 2-Cong nhat): ";
		cin >> type;
	} 

	Employer *emp;
	switch (type) {
	case 1:
		emp = new FulltimeEmployer();
		break;
	case 2:
		emp = new PartimeEmployer();
		break;

	default:
		cout << "Loai nhan vien khong hop le!" << endl;
		return;
	}
	emp->LoaiNV = type;
	cin.ignore();
	emp->NhapNhanVien();

	char MaPhong[5];
	cout << "MaPhong: ";
	cin >> MaPhong;
	Department* phongBan = this->FilterDepartmentById(MaPhong);

	while (phongBan == NULL) {
		cout << "Phong ban " << MaPhong << " khong ton tai! Xin vui long nhap MaPhong khac." << endl;
		cout << "MaPhong: ";
		cin >> MaPhong;
		phongBan = this->FilterDepartmentById(MaPhong);
	}
	emp->SetDepartment(phongBan);

	employers.push_back(emp);
}

void Manage::XuatNhanVien()
{
	system("cls");
	char MaNV[5];
	cout << "Nhap MaNV: ";
	cin.clear();
	fflush(stdin);
	cin >> MaNV;

	int pos = TimViTriNhanVien(MaNV);
	if (pos == -1) return;

	Screens::DisplayEmployerScreen(employers[pos]);
}

int Manage::TimViTriNhanVien(const char * MaNV)
{
	for (int i = 0; i < employers.size(); i++) {
		if (std::strcmp(employers[i]->GetMaNV(), MaNV) == 0)
			return i;
	}
	cout << "Khong tim thay nhan vien tuong ung" << endl;
	return -1;
}

void Manage::XoaNhanVien()
{
	char MaNV[5];
	cout << "Nhap MaNV cua nhan vien can xoa: ";
	cin.clear();
	fflush(stdin);
	cin >> MaNV;

	// Tim nhan vien
	int pos = TimViTriNhanVien(MaNV);
	if (pos == -1){
		cout << "Xoa nhan vien that bai!" << endl;
		return;
	}

	// Xoa nhan vien
	employers.erase(employers.begin() + pos);
	cout << "Xoa nhan vien thanh cong!" << endl;
}

void Manage::SuaNhanVien()
{
	char MaNV[5];
	cout << "Nhap MaNV cua nhan vien can sua: ";
	cin.clear();
	fflush(stdin);
	cin >> MaNV;

	// Tim nhan vien
	int pos = TimViTriNhanVien(MaNV);
	if (pos == -1) {
		cout << "Sua nhan vien that bai!" << endl;
		return;
	}

	// Hien thi man hinh tuy chon
	system("cls");
	char key = Screens::DisplayEditEmployerScreen(employers[pos]);
	system("cls");
	switch (key) {
	case '1': // Sua ho ten
		char tenNV[150];
		cout << "Nhap ho ten moi: ";
		cin >> tenNV;
		employers[pos]->SetTenNV(tenNV);
		break;

	case '2':// Sua SDT
		char sdt[20];
		cout << "Nhap sdt moi: ";
		cin >> sdt;
		employers[pos]->SetSoDT(sdt);
		break;

	case '3': // Sua ngay sinh
		char ngSinh[30];
		cout << "Nhap ngay sinh moi: ";
		cin >> ngSinh;
		employers[pos]->SetNgSinh(ngSinh);
		break;

	case '4':// Doi phong ban
	{
		char MaPB[5];
		cout << "Nhap MaPB: ";
		cin >> MaPB;

		Department* de = this->FilterDepartmentById(MaPB);
		if (de == NULL) {
			cout << "Ma phong ban khong chinh xac.";
			cout << "Thay doi that bai!" << endl;
			Sleep(3000);
			return;
		}
		employers[pos]->SetDepartment(de);
		break;
	}

	case 'Q':
		return;
	default:
		return;
	}
	cout << "Thay doi thanh cong!" << endl << endl;
	employers[pos]->XuatNhanVien();
	Sleep(3000);
}

Department* Manage::FilterDepartmentById(char MaPhong[5]) {
	for (int i = 0; i < departments.size(); i++) {
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
	departments.push_back(d1);
	departments.push_back(d2);

	Employer *e1 = new PartimeEmployer();
	e1->CreateDummyEmployer("1", "Nhan vien 1", "012127545", "10/10/1996", 2, d1);
	Employer *e2 = new FulltimeEmployer();
	e2->CreateDummyEmployer("2", "Nhan vien 2", "012127545", "01/12/1996", 1, d2);
	Employer *e3 = new FulltimeEmployer();
	e3->CreateDummyEmployer("3", "Nhan vien 3", "012127545", "02/09/1996", 1, d2);

	employers.push_back(e1);
	employers.push_back(e2);
	employers.push_back(e3);
}