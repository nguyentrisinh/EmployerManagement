// EmployerManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Manage.h"
#include "Screens.h"


int main()
{
	Manage* manage = new Manage();
	manage->CreateDummyData();
	Screens::DisplayListEmployerScreen(manage->GetListEmployers());

	//char key = Screens::DisplayMainScreen();;
	//while (key != 'T' && key != 't') {
	//	switch (key) {
	//	case '1':
	//		Screens::
	//		break;

	//	case '2':
	//		break;

	//	default:
	//	}
		//manage->NhapDepartment();
		//manage->NhapNhanVien();
		
		//manage->CreateDummyData();
		//manage->XuatNhanVien();
		//cout << "---------------------------------" << endl;


		//manage->XoaNhanVien();
		//system("cls");
		//manage->XuatNhanVien();

		//manage->SuaNhanVien();
		//Screens::DisplayListEmployerScreen(manage->GetListEmployers());
	//}
	//system("pause");
    return 0;
}

