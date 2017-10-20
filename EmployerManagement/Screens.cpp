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
	// Header
	cout << "=============================================" << endl;
	cout << "\t\tSUA NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl;

	//Thong tin nhan vien
	employer->XuatNhanVien();

	// Tuy chon
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
	cout << endl << endl;
	cout << " <- Q. Quay lai" << endl << endl;

	string controlKeys = "1234Qq";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	//cout << key << '\t' << endl;
	return key;
}

char Screens::DisplayMainScreen()
{
	// Header
	cout << "=======================================================" << endl;
	cout << "            QUAN LY NHAN VIEN & PHONG BAN" << endl;
	cout << "=======================================================" << endl << endl;



	return ' ';
}

char Screens::DisplayEmployerScreen(Employer *employer)
{
	// Header
	cout << "=============================================" << endl;
	cout << "           THONG TIN NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl;

	//Thong tin nhan vien
	employer->XuatNhanVien();
	cout << " <- Q. Quay lai" << endl << endl;

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
	// Header
	cout << "=============================================" << endl;
	cout << "           THONG TIN NHAN VIEN" << endl;
	cout << "=============================================" << endl << endl << endl;
	cout << "\tMaNV\t|\t\tHo ten\t\t\t|\t\tLoai\t\t|" << endl;
	cout << "=================================================================================================" << endl;
	
	// List employer
	for (int i = 0; i < employers.size(); i++) {
		Screens::DisplayEmployerListItem(employers[i]);
	}
	cout << endl << "\t<- Q. Quay lai" << "\t\t" << "C. Xem chi tiet ->" << endl;

	// Controls
	string controlKeys = "QqCc";
	char key = ' ';
	while (controlKeys.find(key) == std::string::npos) {
		key = _getch();
	}
	return key;
}

void Screens::DisplayEmployerListItem(Employer * employer)
{
	cout << "\t" << employer->GetMaNV() << "\t";
	cout << "\t" << employer->GetTenNV() << "\t\t\t";
	cout << "\t" << employer->GetLoaiNV() << "\t" << endl;
	cout << "-------------------------------------------------------------------------------------------------" << endl;

}

