#include "Employee.h"

Employee::Employee(int id, string lname, string fname)
{
	this->EmpID = id;
	this->EmpLname = lname;
	this->EmpFname = fname;
}

void Employee::PrintEmployee()
{
	cout << setw(8) << this->EmpID << setw(15) << this->EmpLname << setw(15) << this->EmpFname << endl;	//reserving spaces w/ setw()
}