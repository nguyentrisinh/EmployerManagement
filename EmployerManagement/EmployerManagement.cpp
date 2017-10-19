// EmployerManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Manage.h"


int main()
{
	Manage* manage = new Manage();
	//manage->NhapDepartment();
	//manage->XuatDepartment();
	manage->NhapNhanVien();
	manage->XuatNhanVien();
	system("pause");
    return 0;
}

