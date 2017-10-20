#pragma once
#include "iostream"
#include "stdio.h"
#include "string.h"
#include <conio.h>
#include "Employer.h"

using namespace std;
static class Screens
{
public:
	Screens();
	~Screens();

	// tra ve keycode
	static char DisplayEditEmployerScreen(Employer* employer);
	static char DisplayMainScreen();
	static char DisplayEmployerScreen();
};

