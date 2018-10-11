#include <iostream>
#include <string>
#include "employees.h"
using namespace std;

int main() {
	int nemployees;
	cout << "Enter numbers of employees: ";
	cin >> nemployees;
	employees* arremp = new employees[nemployees];
	for (int i = 0; i < nemployees; i++)
	{
		cout << "Employee : " << i + 1 << endl;
		arremp[i].readEmployeeData();
		arremp[i].raiseInSalary();
	}
	cout << "********Dispaly********" << endl;
	for (int i = 0; i < nemployees; i++)
	{
		cout << "Employee : " << i + 1 << endl;
		arremp[i].displayEmployeeData();
	}
	char d;
	cout << "Print all employees in department: ";
	cin >> d;
	for (int i = 0; i < nemployees; i++)
	{
		arremp[i].displayNamesinEachDep(d);
	}
	cout << endl;
	system("pause");
}