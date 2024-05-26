#include<iostream>
#include<string>
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
class Employee
{
	string ID;
	string name;
	string designation;
public:
	Employee();
	Employee(string id, string nam, string desig);
	Employee(const Employee& ref);
	string getEmployeeDetails();
	void display();
	void setName(string nam);
	void setDesignation(string desig);
	void setID(string id);
	string getName();
	string getID();
	string getDesignation();
	Employee operator= (Employee other);
};
#endif