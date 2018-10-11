#include "employees.h"
#include <string>



employees::employees(string n, char d, double s , int y) {
	name = n, salary = s, dep = d , year=y;
	rate = 0.2;
}

employees::employees() {
	rate = 0.2;
}

void employees::readEmployeeData() {
	cout << "Enter Employee name: ";
	cin >> name;
	cout << "Enter Employee department: ";
	cin >> dep;
	cout << "Enter Employee Base Salary: ";
	cin >> salary;
	cout << "Enter Employee's Year of employment: ";
	cin >> year;
}

void employees::raiseInSalary() {
	if ((2018-year) >= 5)
	{
		salary += (salary*rate);
	}
}
void employees::displayEmployeeData() {
	cout << "Employee name: " << name << endl;
	cout << "Employee department: " << dep <<endl;
	cout << "Employee New Salary : "<< salary<<endl;
}

void employees::displayNamesinEachDep(char d) {
	if (dep == d) {
		cout << name <<" ";
	}
}

employees::~employees()
{
}
