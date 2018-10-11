#pragma once
#include <string>
#include <iostream>
using namespace std;
class employees
{
	string name; 
	char dep;
	double salary;
	double rate;
	int year; 
public:
	employees(string n, char d, double s , int y);
	employees();
	void readEmployeeData();
	void raiseInSalary();
	void displayEmployeeData();
	void displayNamesinEachDep(char d);
	~employees();
};

