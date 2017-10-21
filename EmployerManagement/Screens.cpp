#include "stdafx.h"
#include "Screens.h"


Screens::Screens()
{
}


Screens::~Screens()
{
}

char Screens::DisplayEditEmployerScreen(Employer* employer)
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "\t\tSUA NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl;

	//Thong tin nhan vien
	employer->XuatNhanVien();

	// Tuy chon
	string controlKeys = "1234Qq";
	cout << endl << endl;
	cout << "   +------------------------------+" << endl;
	cout << "   | 1. Doi ten                   |"<< endl;
	cout << "   +------------------------------+" << endl;
	cout << "   | 2. Sua SDT                   |" << endl;
	cout << "   +------------------------------+" << endl;
	cout << "   | 3. Sua ngay sinh             |" << endl;
	cout << "   +------------------------------+" << endl;
	cout << "   | 4. Doi phong ban             |" << endl;
	cout << "   +------------------------------+" << endl;
	if (employer->LoaiNV == 1) {
		cout << "   | 5. Sua luong thang           |" << endl;
		cout << "   +------------------------------+" << endl;
		cout << "   | 6. Sua he so luong           |" << endl;
		cout << "   +------------------------------+" << endl;
		cout << "   | 7. Sua tro cap               |" << endl;
		cout << "   +------------------------------+" << endl;
		controlKeys = "1234567Qq";
	}
	cout << endl << endl;
	cout << " <- Q. Quay lai" << endl << endl;

	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}

char Screens::DisplayMainScreen()
{
	system("cls");
	// Header
	cout << "=======================================================" << endl;
	cout << "            QUAN LY NHAN VIEN & PHONG BAN" << endl;
	cout << "=======================================================" << endl << endl;

	cout << "      +--------------------------------------+" << endl;
	cout << "      |  1. Phong ban                        |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  2. Nhan vien                        |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl << endl;
	cout << "   <- T. Thoat" << endl;


	// Controls
	string controlKeys = "12Tt";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}

char Screens::DisplayEmployerScreen(Employer *employer)
{
	// Header
	cout << "=============================================" << endl;
	cout << "           THONG TIN NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl;

	//Thong tin nhan vien
	employer->XuatNhanVien();
	cout << endl << endl << " <- Q. Quay lai";

	string controlKeys = "Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	//cout << key << '\t' << endl;
	return key;
}

char Screens::DisplayListEmployerScreen(vector<Employer*> employers)
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "           DANH SACH NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl << endl;
	cout << "\tMaNV\t|\t\tHo ten\t\t|\tLoai\t\t|\tPhong ban\t|" << endl;
	cout << "=================================================================================================" << endl;
	
	// List employer
	for (int i = 0; i < employers.size(); i++) {
		Screens::DisplayEmployerListItem(employers[i]);
	}
	// Footer
	cout << endl;
	cout << "   +------------------------------+" << endl;
	cout << "   |  1. Loc (theo phong ban)     |" << endl;
	cout << "   +------------------------------+" << endl;

	cout << endl << endl << "\t<- Q. Quay lai" << endl;

	// Controls
	string controlKeys = "1Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}

char Screens::DisplayFittedListEmployerScreen(vector<Employer*> employers)
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "           DANH SACH NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl << endl;
	cout << "\tMaNV\t|\t\tHo ten\t\t|\tLoai\t\t|\tPhong ban\t|" << endl;
	cout << "=================================================================================================" << endl;

	// List employer
	for (int i = 0; i < employers.size(); i++) {
		Screens::DisplayEmployerListItem(employers[i]);
	}
	cout <<  endl << "\t<- Q. Quay lai" << endl;

	// Controls
	string controlKeys = "Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}

char Screens::DisplayListEmployerBySalary(vector<Employer*> employers, vector<Salary*> salaries, int thang, int nam)
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "            BANG LUONG " << thang << " / " << nam << endl;
	cout << "=============================================" << endl << endl << endl;
	cout << "\tMaNV\t|\t\tHo ten\t\t|\t\tLuong\t\t|" << endl;
	cout << "=================================================================================================" << endl;

	// List employer
	for (int i = 0; i < employers.size(); i++) {
		Employer *employer = employers[i];
		//Screens::DisplayEmployerListItem(employers[i]);
		cout << "\t" << employer->GetMaNV() << "\t";
		cout << "\t" << employer->GetTenNV() << "\t\t";
		cout << "\t" << salaries[i]->Luong << "\t" << endl;
		cout << "-------------------------------------------------------------------------------------------------" << endl << endl;
	}

	cout << "                                 +------------------------------+" << endl;
	cout << "                                 |  1. Luong cao nhat           |" << endl;
	cout << "                                 +------------------------------+" << endl;
	cout << endl << endl << "\t<- Q. Quay lai" << endl;

	// Controls
	string controlKeys = "1Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}


char Screens::DisplayListDepartmentScreen(vector<Department*> deparments)
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "           DANH SACH PHONG BAN" << endl;
	cout << "=============================================" << endl << endl << endl;
	cout << "\tMaPhong\t|\t\tTen phong" << endl;
	cout << "=================================================================================================" << endl;

	// List employer
	for (int i = 0; i < deparments.size(); i++) {
		Screens::DisplayDepartmentListItem(deparments[i]);
	}
	cout << endl << "\t<- Q. Quay lai" << endl;

	// Controls
	string controlKeys = "Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}



char Screens::DisplayEmployerConstrolsScreen()
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "           QUAN LY NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl;

	//Thong tin nhan vien
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  1. Them nhan vien                   |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  2. Xem danh sach nhan vien          |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  3. Xem thong tin nhan vien          |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  4. Sua thong tin nhan vien          |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  5. Xoa nhan vien                    |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  6. Tinh luong                       |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl << endl;
	cout << " <- Q. Quay lai" << endl << endl;

	string controlKeys = "123456Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	//cout << key << '\t' << endl;
	return key;
}

char Screens::DisplayDepartmentConstrolsScreen()
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "           QUAN LY PHONG BAN" << endl;
	cout << "=============================================" << endl << endl;

	//Thong tin nhan vien
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  1. Them phong ban                   |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << "      |  2. Xem danh sach phong ban          |" << endl;
	cout << "      +--------------------------------------+" << endl;
	cout << endl << endl;
	cout << " <- Q. Quay lai" << endl << endl;

	string controlKeys = "12Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}

char Screens::DisplayAddEmployerScreen()
{
	system("cls");
	// Header
	cout << "=============================================" << endl;
	cout << "          THEM NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl;

	return ' ';
}

void Screens::DisplaySalaryCalculateHeader()
{
	// Header
	cout << "=============================================" << endl;
	cout << "          THEM NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl;
}

void Screens::DisplayEmployerListItem(Employer * employer)
{
	cout << "\t" << employer->GetMaNV() << "\t";
	cout << "\t" << employer->GetTenNV() << "\t\t";
	cout << "\t" << employer->GetLoaiNV() << "\t";
	cout << "\t" << employer->GetDeparment()->TenPhong << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;

}

void Screens::DisplayDepartmentListItem(Department* department)
{
	cout << "\t" << department->MaPhong << "\t";
	cout << "\t" << department->TenPhong << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;
}

