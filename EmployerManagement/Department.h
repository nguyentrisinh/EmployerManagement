#pragma once
#include "iostream"
#include "stdio.h"
#include "string.h"

using namespace std;


class Department {
	char MaPhong[5];
	char TenPhong[100];

public:
	Department();
	~Department();

	void NhapPhong();
	void XuatPhong();
};