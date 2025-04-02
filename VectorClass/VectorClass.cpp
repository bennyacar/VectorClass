#include <iostream>
#include <vector>
#include "Employee.h"
#include <string>

int main()
{
    int id;
    string lname;
    string fname;
    int numEmp;
    vector<Employee> employee;
    cout << "How many employees do you want to enter? ==> ";
    cin >> numEmp;
    for (int i = 0; i < numEmp; i++)
    {
        cout << "Enter the ID of the employee # " << (i + 1) << " ==> ";
        cin >> id;
        cin.ignore();
        cout << "Enter the last name of the employee # " << (i + 1) << " ==> ";
        getline(cin, lname);
        cout << "Enter the first name of the employee # " << (i + 1) << " ==> ";
        getline(cin, fname);
        cout << endl;
        employee.emplace_back(id, lname, fname);
    }
    for (Employee e : employee)
    {
        e.PrintEmployee();
    }
}