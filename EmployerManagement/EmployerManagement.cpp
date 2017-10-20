// EmployerManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Manage.h"


int main()
{
	Manage* manage = new Manage();
	//manage->NhapDepartment();
	//manage->NhapNhanVien();
	//system("cls");
	manage->CreateDummyData();
	manage->XuatNhanVien();
	cout << "---------------------------------" << endl;


	/*manage->XoaNhanVien();
	system("cls");
	manage->XuatNhanVien();*/
	system("pause");
    return 0;
}

