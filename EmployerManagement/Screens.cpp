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
	return 0;
}

char Screens::DisplayEmployerScreen()
{
	return 0;
}
