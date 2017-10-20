// EmployerManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Manage.h"
#include "Screens.h"


enum ScreenType {MAIN_SCREEN, EMPLOYER_CONTROLS_SCREEN, DEPARTMENT_CONTROLS_SCREEN, EMPLOYER_LIST_SCREEN,
	DEPARTMENT_LIST_SCREEN, ADD_DEPARTMENT_SCREEN, ADD_EMPLOYERS_SCREEN, EDIT_EMPLOYER_SCREEN, DELETE_EMPLOYER_SCREEN, EMPLOYER_DETAIL_SCREEN};
int main()
{
	Manage* manage = new Manage();
	manage->CreateDummyData();

	manage->NhapLuong();
	manage->NhapLuong();

	manage->XuatLuong();

	//ScreenType screenType = MAIN_SCREEN;
	//char key = ' ';

	//do {
	//	if (screenType == MAIN_SCREEN) {
	//		key = Screens::DisplayMainScreen();
	//		switch (key) {
	//		case '1':
	//			screenType = DEPARTMENT_CONTROLS_SCREEN;
	//			break;

	//		case '2':
	//			screenType = EMPLOYER_CONTROLS_SCREEN;
	//			break;
	//		}
	//		continue;
	//	}
	//	if (screenType == EMPLOYER_CONTROLS_SCREEN) {
	//		key = Screens::DisplayEmployerConstrolsScreen();
	//		switch (key) {
	//		case '1':
	//			//screenType = ADD_EMPLOYERS_SCREEN;
	//			manage->NhapDanhSachNhanVien();
	//			break;

	//		case '2':
	//			screenType = EMPLOYER_LIST_SCREEN;
	//			continue;

	//		case '3':
	//			//screenType = EMPLOYER_DETAIL_SCREEN;
	//			manage->XuatNhanVien();
	//			break;

	//		case '4':
	//			//screenType = EDIT_EMPLOYER_SCREEN;
	//			manage->SuaNhanVien();
	//			break;

	//		case '5':
	//			//screenType = DELETE_EMPLOYER_SCREEN;
	//			manage->XoaNhanVien();
	//			break;

	//		case 'Q':
	//		case 'q':
	//			screenType = MAIN_SCREEN;
	//			continue;
	//		}
	//		screenType = EMPLOYER_CONTROLS_SCREEN;
	//		continue;
	//	}
	//	
	//	/*if (screenType == ADD_EMPLOYERS_SCREEN) {
	//		manage->NhapDanhSachNhanVien();
	//		screenType = EMPLOYER_CONTROLS_SCREEN;
	//		continue;
	//	}
	//	if (screenType == EDIT_EMPLOYER_SCREEN) {
	//		manage->SuaNhanVien();
	//		screenType = EMPLOYER_CONTROLS_SCREEN;
	//		continue;
	//	}
	//	if (screenType == DELETE_EMPLOYER_SCREEN) {
	//		manage->XoaNhanVien();
	//		screenType = EMPLOYER_CONTROLS_SCREEN;
	//		continue;
	//	}
	//	if (screenType == EMPLOYER_DETAIL_SCREEN) {
	//		manage->XuatNhanVien();
	//		screenType = EMPLOYER_CONTROLS_SCREEN;
	//		continue;
	//	}*/

	//	if (screenType == EMPLOYER_LIST_SCREEN) {
	//		key = Screens::DisplayListEmployerScreen(manage->GetListEmployer());
	//		switch (key) {
	//		case '1':
	//			Screens::DisplayFittedListEmployerScreen(manage->DanhSachNhanVienTheoPhongBan());
	//			break;

	//		case '2':
	//			break;

	//		case 'Q':
	//		case 'q':
	//			screenType = EMPLOYER_CONTROLS_SCREEN;
	//			break;
	//		}
	//		continue;
	//	}

	//	/*if (screenType == DEPARTMENT_LIST_SCREEN) {
	//		switch (key) {
	//		case '1':
	//			break;

	//		case '2':
	//			break;

	//		case 'Q':
	//		case 'q':
	//			screenType = EMPLOYER_CONTROLS_SCREEN;
	//			break;
	//		}
	//		continue;
	//	}*/

	//	if (screenType == DEPARTMENT_CONTROLS_SCREEN) {
	//		key = Screens::DisplayDepartmentConstrolsScreen();
	//		switch (key) {
	//		case '1':
	//			//screenType = ADD_DEPARTMENT_SCREEN;
	//			manage->NhapDepartment();
	//			break;

	//		case '2':
	//			//screenType = DEPARTMENT_LIST_SCREEN;
	//			Screens::DisplayListDepartmentScreen(manage->GetListDepartment());
	//			break;

	//		case 'Q':
	//		case 'q':
	//			screenType = MAIN_SCREEN;
	//			break;
	//		}
	//		continue;
	//	}
	//} while (key != 'T' && key != 't');



	//system("pause");
    return 0;
}

