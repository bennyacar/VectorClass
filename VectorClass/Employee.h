#include <iostream>
#include <iomanip>
using namespace std;

class Employee
{
private:
	int EmpID;
	string EmpLname;
	string EmpFname;
public:
	Employee(int, string, string);
	void PrintEmployee();
};

