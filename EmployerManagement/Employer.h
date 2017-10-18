#pragma once
#include "iostream"

using namespace std;

class Employer {
private:
	char MaNV[4];
	char TenNV[150];
	char SoDT[20];
	char NgSinh[30];

public:
	Employer();

	~Employer();

	void addEmployer(char MaNV[4], char TenNV[150], char SoDT[20], char NgSinh);
};