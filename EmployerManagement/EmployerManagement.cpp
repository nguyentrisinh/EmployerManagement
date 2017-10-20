// EmployerManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Manage.h"
#include "Screens.h"


enum ScreenType {MAIN_SCREEN, EMPLOYER_CONTROLS_SCREEN, DEPARTMENT_CONTROLS_SCREEN, EMPLOYER_LIST_SCREEN,
	DEPARTMENT_LIST_SCREEN, ADD_DEPARTMENT_SCREEN, ADD_EMPLOYER_SCREEN, NONE_SCREEN};
int main()
{
	Manage* manage = new Manage();
	manage->CreateDummyData();

	ScreenType screenType = MAIN_SCREEN;
	char key = ' ';

	do {
		if (screenType == MAIN_SCREEN) {
			key = Screens::DisplayMainScreen();
			switch (key) {
			case '1':
				screenType = DEPARTMENT_CONTROLS_SCREEN;
				break;

			case '2':
				screenType = EMPLOYER_CONTROLS_SCREEN;
				break;
			}
			continue;
		}
		if (screenType == DEPARTMENT_CONTROLS_SCREEN) {
			key = Screens::DisplayDepartmentConstrolsScreen();
			switch (key) {
			case '1':
				screenType = ADD_DEPARTMENT_SCREEN;
				break;

			case '2':
				screenType = DEPARTMENT_LIST_SCREEN;
				break;

			case 'Q':
			case 'q':
				screenType = MAIN_SCREEN;
				break;
			}
			continue;
		}
		if (screenType == EMPLOYER_CONTROLS_SCREEN) {
			key = Screens::DisplayEmployerConstrolsScreen();
			switch (key) {
			case '1':
				screenType = ADD_EMPLOYER_SCREEN;
				break;

			case '2':
				screenType = EMPLOYER_LIST_SCREEN;
				break;

			case 'Q':
			case 'q':
				screenType = MAIN_SCREEN;
				break;
			}
			continue;
		}
		
		if (screenType == ADD_EMPLOYER_SCREEN) {
			key = Screens::DisplayEmployerConstrolsScreen();
			switch (key) {
			case '1':
				break;

			case '2':
				break;

			case 'Q':
			case 'q':
				screenType = EMPLOYER_CONTROLS_SCREEN;
				break;
			}
			continue;
		}

		if (screenType == EMPLOYER_LIST_SCREEN) {
			key = Screens::DisplayListEmployerScreen(manage->GetListEmployers());
			switch (key) {
			case '1':
				break;

			case '2':
				break;

			case 'Q':
			case 'q':
				screenType = EMPLOYER_CONTROLS_SCREEN;
				break;
			}
			continue;
		}
	} while (key != 'T' && key != 't' && screenType != MAIN_SCREEN);



	system("pause");
    return 0;
}

